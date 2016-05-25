#include<stdio.h>
#include<stdlib.h>
//定义单向链表节点
struct Node
{
	int Address;
	int Date;
	int After;
	struct Node *Next;
};
//记录题目里数据地址的标记数组
int mark[100000]= {0};
//暂时的数据存储数组
struct Node node[100000];
int main()
{
	//链表创建函数，返回链表长度
	int creat(struct Node *head);
	//链表的反转函数
	void reverse(struct Node *head,struct Node *tail);
	//链表的输出函数
	void display(struct Node *head);
	int start,N,k;
	//输入数据的首地址、数据个数、还有反转时用到的k
	scanf("%d %d %d",&start,&N,&k);
	int i,first;
	//输入乱序的数据
	for(i=0; i<N; i++)
	{
		scanf("%d %d %d",&node[i].Address,&node[i].Date,&node[i].After);
		//标记数组的下标对应题目里的地址，元素则对应该地址数据在存储数组里的位置
		mark[node[i].Address]=i;
		//记录第一个数据在存储数组中的位置
		if(node[i].Address==start) first=i;
	}
	int len,j;
	struct Node *head,*ph,*pt,*p;
	//头指针指向头节点 
	head=(struct Node *)malloc(sizeof(struct Node));
	//头节点指向第一个数据，第一个数据不再单独申请空间 
	head->Next=&node[first];
	//创建链表，并获取链表长度 
	len=creat(head);
	//初始化反转的第一个首地址 
	ph=head;
	//对链表每k个进行反转 
	for(i=0; i<len/k; i++)
	{
		pt=ph;
		//反转后p即为第二次的首地址 
		p=ph->Next;
		//利用首地址获得尾地址 
		for(j=0; j<k; j++)
		{
			pt=pt->Next;
		}
		//调用反转函数进行链表的反转 
		reverse(ph,pt);
		//第二次的首地址进行赋值 
		ph=p;
	}
	//输出反转后的链表 
	display(head);
	return 0;
}
//创建链表 
int creat(struct Node *head)
{
	int len=1;
	//定义尾节点和新节点 
	struct Node *tail,*newp;
	//初始化尾节点 
	tail=head->Next;
	//利用标记数组从储存数组里获取数据并创建链表 
	while(1)
	{
		//申请新节点 
		newp=(struct Node *)malloc(sizeof(struct Node));
		if(newp==NULL)
		{
			printf("overflow\n");
			exit(1);
		}
		//链表长度加一 
		len++;
		//从第一个数据里获取第二个地址，也就是node[1].Next
		//利用标记数组找到该地址的数据在node数组中的位置，也就是mark[node[1].Next]
		//把该数据整体赋值给新节点,也就是按顺序的第二个数据
		//接下来是第三个、第四个...直到出现题目中的结束地址-1
		newp->Address=node[mark[tail->After]].Address;
		newp->Date=node[mark[tail->After]].Date;
		newp->After=node[mark[tail->After]].After;
		newp->Next=NULL;
		//利用尾节点将新节点接入链表 
		tail->Next=newp;
		//尾节点后移一位 
		tail=newp;
		if(tail->After==-1)break;
	}
	//返回链表的长度 
	return len;
}
//链表后删函数，反转函数中有用到，返回被删除的节点的地址 
struct Node *deleteAfter(struct Node *p)
{
	//将t指向要删除的节点 
	struct Node *t=p->Next;
	//p不是尾节点才能有东西后删 
	if(t!=NULL)
	{
		//跳过了t,相当于从链表中删除 
		p->Next=t->Next;
		//t不是尾节点的操作 
		if(t->Next!=NULL)
		{
			p->After=t->Next->Address;
		}
		//t为尾节点的操作稍有不同 
		else
		{
			p->After=-1;
		}
	}
	//返回被删除的节点t的地址 
	return t;
}
//链表后插操作，反转函数中有用到
//传入被后插的节点的地址及插入的节点的地址 
void insertAfter(struct Node *p,struct Node *newp)
{
	//新节点接入链表 
	newp->Next=p->Next;
	newp->After=p->Next->Address;
	//完成后插 
	p->Next=newp;
	p->After=newp->Address;
}
//链表反转函数
//通过一系列的后删和后插实现反转 
void reverse(struct Node *head,struct Node *tail)
{
	//调用后删和后插函数 
	struct Node *deleteAfter(struct Node *p);
	void insertAfter(struct Node *p,struct Node *newp);
	//反转的节点只有一个时，什么都不干 
	if(head->Next==tail)
	{
		return;
	}	
	int mark=tail->After;
	struct Node *rear=head->Next,*del;
	//当反转的第一个节点变成最后一个节点时反转完成 
	while(rear->After!=mark)
	{
		del=deleteAfter(rear);
		insertAfter(head,del);
	}
}
//链表输出函数，传入头指针 
void display(struct Node *head)
{
	struct Node *p=head->Next;
	while(p!=NULL)
	{
		//按要求输出，不足五位补零 
		printf("%05d %d ",p->Address,p->Date);
		if(p->After!=-1)
		{
			printf("%05d\n",p->After);
		}
		//-1需要特判，不能补零 
		else
		{
			printf("-1\n");
			break;
		}
		//指针后移 
		p=p->Next;
	}
}


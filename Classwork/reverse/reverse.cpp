#include<stdio.h>
#include<stdlib.h>
//���嵥������ڵ�
struct Node
{
	int Address;
	int Date;
	int After;
	struct Node *Next;
};
//��¼��Ŀ�����ݵ�ַ�ı������
int mark[100000]= {0};
//��ʱ�����ݴ洢����
struct Node node[100000];
int main()
{
	//����������������������
	int creat(struct Node *head);
	//����ķ�ת����
	void reverse(struct Node *head,struct Node *tail);
	//������������
	void display(struct Node *head);
	int start,N,k;
	//�������ݵ��׵�ַ�����ݸ��������з�תʱ�õ���k
	scanf("%d %d %d",&start,&N,&k);
	int i,first;
	//�������������
	for(i=0; i<N; i++)
	{
		scanf("%d %d %d",&node[i].Address,&node[i].Date,&node[i].After);
		//���������±��Ӧ��Ŀ��ĵ�ַ��Ԫ�����Ӧ�õ�ַ�����ڴ洢�������λ��
		mark[node[i].Address]=i;
		//��¼��һ�������ڴ洢�����е�λ��
		if(node[i].Address==start) first=i;
	}
	int len,j;
	struct Node *head,*ph,*pt,*p;
	//ͷָ��ָ��ͷ�ڵ� 
	head=(struct Node *)malloc(sizeof(struct Node));
	//ͷ�ڵ�ָ���һ�����ݣ���һ�����ݲ��ٵ�������ռ� 
	head->Next=&node[first];
	//������������ȡ������ 
	len=creat(head);
	//��ʼ����ת�ĵ�һ���׵�ַ 
	ph=head;
	//������ÿk�����з�ת 
	for(i=0; i<len/k; i++)
	{
		pt=ph;
		//��ת��p��Ϊ�ڶ��ε��׵�ַ 
		p=ph->Next;
		//�����׵�ַ���β��ַ 
		for(j=0; j<k; j++)
		{
			pt=pt->Next;
		}
		//���÷�ת������������ķ�ת 
		reverse(ph,pt);
		//�ڶ��ε��׵�ַ���и�ֵ 
		ph=p;
	}
	//�����ת������� 
	display(head);
	return 0;
}
//�������� 
int creat(struct Node *head)
{
	int len=1;
	//����β�ڵ���½ڵ� 
	struct Node *tail,*newp;
	//��ʼ��β�ڵ� 
	tail=head->Next;
	//���ñ������Ӵ����������ȡ���ݲ��������� 
	while(1)
	{
		//�����½ڵ� 
		newp=(struct Node *)malloc(sizeof(struct Node));
		if(newp==NULL)
		{
			printf("overflow\n");
			exit(1);
		}
		//�����ȼ�һ 
		len++;
		//�ӵ�һ���������ȡ�ڶ�����ַ��Ҳ����node[1].Next
		//���ñ�������ҵ��õ�ַ��������node�����е�λ�ã�Ҳ����mark[node[1].Next]
		//�Ѹ��������帳ֵ���½ڵ�,Ҳ���ǰ�˳��ĵڶ�������
		//�������ǵ����������ĸ�...ֱ��������Ŀ�еĽ�����ַ-1
		newp->Address=node[mark[tail->After]].Address;
		newp->Date=node[mark[tail->After]].Date;
		newp->After=node[mark[tail->After]].After;
		newp->Next=NULL;
		//����β�ڵ㽫�½ڵ�������� 
		tail->Next=newp;
		//β�ڵ����һλ 
		tail=newp;
		if(tail->After==-1)break;
	}
	//��������ĳ��� 
	return len;
}
//�����ɾ��������ת���������õ������ر�ɾ���Ľڵ�ĵ�ַ 
struct Node *deleteAfter(struct Node *p)
{
	//��tָ��Ҫɾ���Ľڵ� 
	struct Node *t=p->Next;
	//p����β�ڵ�����ж�����ɾ 
	if(t!=NULL)
	{
		//������t,�൱�ڴ�������ɾ�� 
		p->Next=t->Next;
		//t����β�ڵ�Ĳ��� 
		if(t->Next!=NULL)
		{
			p->After=t->Next->Address;
		}
		//tΪβ�ڵ�Ĳ������в�ͬ 
		else
		{
			p->After=-1;
		}
	}
	//���ر�ɾ���Ľڵ�t�ĵ�ַ 
	return t;
}
//�������������ת���������õ�
//���뱻���Ľڵ�ĵ�ַ������Ľڵ�ĵ�ַ 
void insertAfter(struct Node *p,struct Node *newp)
{
	//�½ڵ�������� 
	newp->Next=p->Next;
	newp->After=p->Next->Address;
	//��ɺ�� 
	p->Next=newp;
	p->After=newp->Address;
}
//����ת����
//ͨ��һϵ�еĺ�ɾ�ͺ��ʵ�ַ�ת 
void reverse(struct Node *head,struct Node *tail)
{
	//���ú�ɾ�ͺ�庯�� 
	struct Node *deleteAfter(struct Node *p);
	void insertAfter(struct Node *p,struct Node *newp);
	//��ת�Ľڵ�ֻ��һ��ʱ��ʲô������ 
	if(head->Next==tail)
	{
		return;
	}	
	int mark=tail->After;
	struct Node *rear=head->Next,*del;
	//����ת�ĵ�һ���ڵ������һ���ڵ�ʱ��ת��� 
	while(rear->After!=mark)
	{
		del=deleteAfter(rear);
		insertAfter(head,del);
	}
}
//�����������������ͷָ�� 
void display(struct Node *head)
{
	struct Node *p=head->Next;
	while(p!=NULL)
	{
		//��Ҫ�������������λ���� 
		printf("%05d %d ",p->Address,p->Date);
		if(p->After!=-1)
		{
			printf("%05d\n",p->After);
		}
		//-1��Ҫ���У����ܲ��� 
		else
		{
			printf("-1\n");
			break;
		}
		//ָ����� 
		p=p->Next;
	}
}


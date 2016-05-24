#include<stdio.h>
#include<stdlib.h>

//定义了个结构体来存储数据
struct Node
{
  int Address;
  int Date;
  int After;
  struct Node *Next;
};

int mark[100000]= {0};
struct Node node[100000];

int main()
{
  int creat(struct Node *head);
  void reverse(struct Node *head,struct Node *tail);
  void display(struct Node *head);

  int start,N,k;
  scanf("%d %d %d",&start,&N,&k);

  int i,first;
  for(i=0; i<N; i++)
  {
    scanf("%d %d %d",&node[i].Address,&node[i].Date,&node[i].After);
    mark[node[i].Address]=i;
    if(node[i].Address==start) first=i;
  }

  int len,j;
  struct Node *head,*ph,*pt,*p,*p2;
  head=(struct Node *)malloc(sizeof(struct Node));
  head->Next=&node[first];
  len=creat(head);
  ph=head;
  for(i=0;i<len/k;i++)
  {
    p=ph;
    p2=ph->Next;
    for(j=0;j<k;j++)
    {
      p=p->Next;
    }
    pt=p;
    reverse(ph,pt);
    ph=p2;
  }

  display(head);

  return 0;
}

int creat(struct Node *head)
{
  int len=1;
  struct Node *tail,*newp;
  tail=head->Next;
  while(1)
  {
    newp=(struct Node *)malloc(sizeof(struct Node));
    if(newp==NULL)
    {
      printf("overflow\n");
      exit(1);
    }

    len++;
    newp->Address=node[mark[tail->After]].Address;
    newp->Date=node[mark[tail->After]].Date;
    newp->After=node[mark[tail->After]].After;
    newp->Next=NULL;
    tail->Next=newp;
    tail=newp;
    if(tail->After==-1)break;
  }
  return len;
}

struct Node *deleteAfter(struct Node *p)
{
  struct Node *t=p->Next;
  if(t!=NULL)
  {
    p->Next=t->Next;
    if(t->Next!=NULL)
    {
      p->After=t->Next->Address;
    }
    
    else
    {
      p->After=-1;
    }
  }  
  return t;
}

void insertAfter(struct Node *p,struct Node *newp)
{
  newp->Next=p->Next;
  newp->After=p->Next->Address;
  p->Next=newp;
  p->After=newp->Address;
}

void reverse(struct Node *head,struct Node *tail)
{
  struct Node *deleteAfter(struct Node *p);
  void insertAfter(struct Node *p,struct Node *newp);

  if(head->Next==tail)
  {
    return;
  }

  int mark=tail->After;  
  struct Node *rear=head->Next,*del;

  while(rear->After!=mark)
  {
    del=deleteAfter(rear);
    insertAfter(head,del);
  }
}

void display(struct Node *head)
{
  struct Node *p=head->Next;
  while(p!=NULL)
  {
    printf("%05d %d ",p->Address,p->Date);
    if(p->After!=-1)
    {
      printf("%05d\n",p->After);
    }
    else 
	{
		printf("-1\n");
		break;
	}

    p=p->Next;
  }
}


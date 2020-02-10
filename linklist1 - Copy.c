#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void insert_at_beg(int);
void insert(int,int);
void del(int);
void display();
void insert_at_beg(int n)
{
     struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=n;
    temp->next=NULL;
    if(head!=NULL)
    temp->next=head;
    head=temp;
}
void insert(int n,int p)
{    int i;
     struct Node *temp1 = (struct Node*)malloc(sizeof(struct Node));
     temp1->data=n;
     temp1->next=NULL;
     if(p==1)
     {
         temp1->next=head;
         head=temp1;
         return;
     }
     struct Node *temp2 = head;
     for(i=0;i<p-2;i++)
     {
         temp2=temp2->next;
     }
     temp1->next=temp2->next;
     temp2->next=temp1;
}
void del(int p)
{  int i;
   struct Node* temp1= head;
   if(p==1)
   {
       head=temp1->next;
       free(temp1);
       return;
   }
   for(i=0;i<p-2;i++)
        temp1=temp1->next;
   struct Node *temp2=temp1->next;
   temp1->next=temp2->next;
   free(temp2);
}
void display()
{   struct Node* temp=head;
    printf("status of linklist\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{   int c,n,p;
    head=NULL;
   b: printf("ENTER UR CHOICE\n");
    printf("INSERT AT BEGNING\n");
    printf("INSERT\n");
    printf("DELETE\n");
    printf("DISPLAY\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        {
           printf("enter no to insert\n");
           scanf("%d",&n);
           insert_at_beg(n);
           break;
        }
    case 2:
        {
          printf("enter no to insert\n");
          scanf("%d",&n);
          printf("enter position\n");
          scanf("%d",&p);
          insert(n,p);
          break;
        }
    case 3:
        {
            printf("enter position of node to delete\n");
            scanf("%d",&p);
            del(p);
            break;
        }
    case 4:
        {
            display();
            break;
        }
    }
    goto b;
    return 0;
}

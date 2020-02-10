#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* add_in_empty(struct node *last,int data)
{
    if(last!=NULL)
        return last;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    last=temp;
    last->next=last;
    return last;
}
struct node* add_at_beg(struct node *last,int data)
{
  if(last==NULL)
    return add_in_empty(last,data);
  struct node* temp = (struct node*)malloc(sizeof(struct node));
  temp->data=data;
  temp->next=last->next;
  last->next=temp;
  return last;
}
struct node *add_at_end(struct node *last,int data)
{
  if(last==NULL)
    return add_in_empty(last,data);
  struct node* temp = (struct node*)malloc(sizeof(struct node));
  temp->data=data;
  temp->next=last->next;
  last->next=temp;
  last=temp;
  return last;
}
struct node* add_middle(struct node *last,int data,int item)
{ if(last==NULL)
    return NULL;
   struct node *p,*temp;
   p=last->next;
   do
   {
       if(p->data=item)
       {
           temp=(struct node*)malloc(sizeof(struct node));
           temp->data=data;
           temp->next=p->next;
           p->next=temp;
           if(p==last)
            last=temp;
            return last;
       }
       p=p->next;
   } while(p!=last->next);
  printf("element not found in list \n");
  return last;
}
struct node* del_first(struct node *last)
{
 if(last==NULL)
 {
    printf("list is empty\n");
    return;
 }
    struct node *temp1;
    temp1=last->next;
    last->next=temp1->next;
    free(temp1);
    return last;
 }
struct node* del_after(struct node *last,int item)
{
 if(last==NULL)
 {
    printf("list is empty\n");
    return;
 }
  struct node *p,*temp;
   p=last->next;
   do
   {
       if(p->data=item)
       {
           temp=(struct node*)malloc(sizeof(struct node));
           temp=p->next;
           p->next=temp->next;
           free(temp);
           if(p==last->next)
            last=p;
           return last;
       }
       p=p->next;
   } while(p!=last->next);
  printf("element not found in list \n");
  return last;

}

void display(struct node* last)
{
  struct node* temp;
  if(last==NULL)
   {
    printf("list is empty\n");
    return;
   }
   temp=last->next;
   do
   {
       printf("%d ",temp->data);
       temp=temp->next;
   } while(temp!=last->next);
}
int main()
{   int n,c,item;
    struct node* last=NULL;
     b: printf("ENTER UR CHOICE\n");
    printf("1 INSERT in EMPTY LIST\n");
    printf("2 INSERT AT BEGNING\n");
    printf("3 INSERT AT END\n");
    printf("4 INSERT AFTER ELEMENT\n");
    printf("5 DISPLAY\n");
    printf("6 DELETE FIRST NODE\n");
    printf("7 DELETE after NODE\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        {
           printf("enter no to insert\n");
           scanf("%d",&n);
           last=add_in_empty(last,n);
           break;
        }
    case 2:
        {
          printf("enter no to insert in beginning\n");
          scanf("%d",&n);
          last=add_at_beg(last,n);
          break;
        }
         case 3:
        {
          printf("enter no to insert at end\n");
          scanf("%d",&n);
          last=add_at_end(last,n);
          break;
        }
    case 4:
        {
            printf("enter no to insert\n");
            scanf("%d",&n);
            printf("enter no after which to insert\n");
            scanf("%d",&item);
            last=add_middle(last,n,item);
            break;
        }
    case 5:
        {
            display(last);
            printf("\n");
            break;
        }

    case 6:
        {
            last=del_first(last);
            break;
        }
    case 7:{
         printf("enter no after which to delete\n");
            scanf("%d",&item);
           last=del_after(last,item);
           break;
    }
    }
    goto b;
    return 0;
}

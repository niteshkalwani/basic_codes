#include<stdio.h>
#include<malloc.h>


struct poly
{
	int data;
	struct poly* next;
	int pow;
};


void Display(struct poly *p)
{
	struct poly *tp=p;


	while(tp->next!=NULL)
	{
		printf("%dx^%d+",tp->data,tp->pow);
		tp=tp->next;
	}
	printf("%dx^%d ",tp->data,tp->pow);
}


void insert(struct poly **p,int data,int pow)
{
	struct poly *tp=*p;
	struct poly *node= (struct poly *)malloc(sizeof(struct poly));
	if(tp==NULL)
	{

		node->data=data;
		node->pow=pow;
		node->next=NULL;
		*p=node;
	}
	else
	{
		while(tp->next!=NULL)
		{
			tp=tp->next;
		}

		node->data=data;
		node->pow=pow;
		node->next=NULL;
		tp->next=node;
	}


}

void add(struct poly *p1,struct poly *p2)
{

	struct poly *i=p1;
	struct poly *j=p2;


	int found=0;

	while(i!=NULL)
	{

		j=p2;
		while(j!=NULL)
		{

		if(i->pow==j->pow)
		{
			i->data=((i->data)+(j->data));

			break;
		}


		j=j->next;

		}
		i=i->next;
	if(i==NULL)
	break;
	}
	j=p2;
	i=p1;

	while(j!=NULL)
	{	found=0;
		i=p1;
		while(i!=NULL)
		{
			if(j->pow==i->pow)
			found=1;
			i=i->next;
		}

		if(found==0)
		insert(&p1,(j->data),(j->pow));
	j=j->next;
	}

}
int main()
{
	struct poly *p1=NULL,*p2=NULL;


	int ch=1;
	int data,pow;
	printf("Enter the values for first Polynomial\n");
	do{
		printf("\nEnter the power of x :");
		scanf("%d",&pow);
		printf("\nEnter the co efficient of x^%d:",pow);
		scanf("%d",&data);
		insert(&p1,data,pow);

		printf("Press 1 to continue:\n");
		printf("Press 0 to Stop:\n");
		scanf("%d",&ch);


	}while(ch==1);

	Display(p1);

	printf("\nEnter the values for second Polynomial\n");
	 ch=1;
	do{
		printf("\nEnter the power of x :");
		scanf("%d",&pow);
		printf("\nEnter the co efficient of x^%d:",pow);
		scanf("%d",&data);
		insert(&p2,data,pow);

		printf("Press 1 to continue:\n");
		printf("Press 0 to Stop:\n");
		scanf("%d",&ch);


	}while(ch==1);


	Display(p2);


	printf("\n\n( ");
	Display(p1);
	printf(" ) ");
	printf("   +    ");
	printf(" ( ");
	Display(p2);
	printf(" ) ");

	printf("   =   ");
	add(p1,p2);
	Display(p1);





}

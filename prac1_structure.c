#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    float pt;

};

void main()
{    int i;
    struct student s[3];
    printf("enter data \n");
    for(i=0;i<3;i++)
    {   printf("enter name\n");
        scanf("%s,\n",s[i].name);
        printf("enter rollno \n");
        scanf("%d,\n",s[i].rollno);
        printf("enter pt \n");
        scanf("%f,\n",s[i].pt);
    }
    for(i=0;i<3;i++)
    {
        printf("%s,\n",s[i].name);
        printf("%d,\n",s[i].rollno);
        printf("%f,\n",s[i].pt);
    }
}

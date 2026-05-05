#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int roll;
    char name[20];
    struct node *link;
};

struct node *START=NULL;

void create()
{
    struct node *new,*temp;
    char ch='y';

    while(ch=='y')
    {
        new=(struct node*)malloc(sizeof(struct node));

        printf("Enter Roll No: ");
        scanf("%d",&new->roll);

        printf("Enter Name: ");
        scanf("%s",new->name);

        new->link=NULL;

        if(START==NULL)
            START=new;
        else
        {
            temp=START;
            while(temp->link!=NULL)
                temp=temp->link;
            temp->link=new;
        }

        printf("Add more? (y/n): ");
        scanf(" %c",&ch);
    }
}

void display()
{
    struct node *temp=START;

    while(temp!=NULL)
    {
        printf("%d %s\n",temp->roll,temp->name);
        temp=temp->link;
    }
}

void main()
{
    int ch;
    char choice='y';

    clrscr();

    while(choice=='y')
    {
        printf("\n1.CREATE 2.DISPLAY\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: create(); break;
            case 2: display(); break;
            default: printf("Invalid option\n");
        }

        printf("Continue? (y/n): ");
        scanf(" %c",&choice);
    }

    getch();
}

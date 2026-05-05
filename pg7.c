#include<stdio.h>
#include<conio.h>

#define MAX 5

int stack[MAX], TOP=-1;

int overflow()
{
    if(TOP==MAX-1)
        return 1;
    else
        return 0;
}

int underflow()
{
    if(TOP==-1)
        return 1;
    else
        return 0;
}

void push()
{
    int item;
    if(overflow())
    {
        printf("Stack Overflow\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d",&item);

    TOP++;
    stack[TOP]=item;
}

void pop()
{
    if(underflow())
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Deleted element is %d\n",stack[TOP]);
    TOP--;
}

void display()
{
    int i;
    if(underflow())
    {
        printf("Stack is empty\n");
        return;
    }

    for(i=TOP;i>=0;i--)
        printf("%d ",stack[i]);
}

void main()
{
    int ch;
    char choice='y';

    clrscr();

    while(choice=='y' || choice=='Y')
    {
        printf("\n1.PUSH 2.POP 3.DISPLAY\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            default: printf("Invalid option\n");
        }

        printf("\nContinue? (y/n): ");
        scanf(" %c",&choice);
    }

    getch();
}

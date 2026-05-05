#include<stdio.h>
#include<conio.h>

#define MAX 5

int queue[MAX], FRONT=-1, REAR=-1;

int qfull()
{
    if(REAR==MAX-1)
        return 1;
    else
        return 0;
}

int qempty()
{
    if(FRONT==-1 || FRONT>REAR)
        return 1;
    else
        return 0;
}

void qinsert()
{
    int item;

    if(qfull())
    {
        printf("Queue is full\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d",&item);

    if(FRONT==-1)
        FRONT=0;

    REAR++;
    queue[REAR]=item;
}

void qdelete()
{
    if(qempty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Deleted element is %d\n",queue[FRONT]);
    FRONT++;
}

void qdisplay()
{
    int i;

    if(qempty())
    {
        printf("Queue is empty\n");
        return;
    }

    for(i=FRONT;i<=REAR;i++)
        printf("%d ",queue[i]);
}

void main()
{
    int ch;
    char choice='y';

    clrscr();

    while(choice=='y' || choice=='Y')
    {
        printf("\n1.INSERT 2.DELETE 3.DISPLAY\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: qinsert(); break;
            case 2: qdelete(); break;
            case 3: qdisplay(); break;
            default: printf("Invalid option\n");
        }

        printf("\nContinue? (y/n): ");
        scanf(" %c",&choice);
    }

    getch();
}

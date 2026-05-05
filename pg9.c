#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *left,*right;
};

struct node *root=NULL;

struct node* create(int item)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->info=item;
    p->left=p->right=NULL;
    return p;
}

struct node* insert(struct node *root,int item)
{
    if(root==NULL)
        return create(item);

    if(item<root->info)
        root->left=insert(root->left,item);
    else if(item>root->info)
        root->right=insert(root->right,item);

    return root;
}

void inorder(struct node *p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        printf("%d ",p->info);
        inorder(p->right);
    }
}

void main()
{
    int n,i,x;

    clrscr();

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        root=insert(root,x);
    }

    printf("Inorder Traversal:\n");
    inorder(root);

    getch();
}

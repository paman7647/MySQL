#include<stdio.h>
#include<conio.h>

void merge(int a[], int l, int m, int r)
{
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;

    int left[50], right[50];

    for(i=0;i<n1;i++)
        left[i]=a[l+i];

    for(j=0;j<n2;j++)
        right[j]=a[m+1+j];

    i=0; j=0; k=l;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
            a[k++]=left[i++];
        else
            a[k++]=right[j++];
    }

    while(i<n1)
        a[k++]=left[i++];

    while(j<n2)
        a[k++]=right[j++];
}

void mergesort(int a[], int l, int r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}

void main()
{
    int a[50],n,i;

    clrscr();

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    mergesort(a,0,n-1);

    printf("Sorted list:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    getch();
}

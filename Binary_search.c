#include<stdio.h>
int bin_srch(int[],int,int,int);
int main()
{
    int a[10],b;
    int i,n,x;
    printf("Enter 10 numbers in ascending order\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("Enter the value you want to search\n");
    scanf("%d",&x);
    b=bin_srch(a,0,i-1,x);
    printf("%d is the %d element of the array\n",x,b+1);
    return 0;
}
int bin_srch(int a[],int l,int r,int x)
{
    int mid=(l+(r-1))/2;
    if(a[mid]==x)
        return mid;
    else if (x>a[mid])
        return bin_srch(a,mid+1,r,x);
    else 
        return bin_srch(a,l,mid,x);
}
#include<stdio.h>
int strictly_even(int *a,int n)
{
    int i,e=0,ei=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && i%2==0)
        {
            ei++;
        }
    }
    if(e==ei)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a[100],x,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=strictly_even(a,n);
    if(x==1)
    {
        printf("True");
    }
    if(x==0)
    {
        printf("False");
    }
}
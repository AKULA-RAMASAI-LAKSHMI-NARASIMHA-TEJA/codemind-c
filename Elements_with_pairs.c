#include<stdio.h>
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        //printf("%d ",a[i]);
    }
    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        
    }
    else
    {
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("0");
        
    }
}
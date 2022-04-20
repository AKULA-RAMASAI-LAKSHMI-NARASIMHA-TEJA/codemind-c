#include<stdio.h>
int main()
{
    int m,n,i,x=0,y=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            x+=i;
        }
    }
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            y+=i;
        }
    }
    if(x==n && y==m)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}
#include<stdio.h>
int fun(int n)
{
    int  d,temp=0,c=0,cc=0;
    temp=n;
    while(n)
    {
        d=n%10;
        if(d==0)
        {
            return 0;
        }
        if(temp%d==0)
        {
            c++;
        }
        n=n/10;
        cc++;
    }
    if(c==cc)
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
    int l,u,i;
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++)
    {
        if(fun(i))
        {
            printf("%d ",i);
        }
    }
}
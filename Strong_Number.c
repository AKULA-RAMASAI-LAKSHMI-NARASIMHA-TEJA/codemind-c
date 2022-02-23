#include<stdio.h>
int main()
{
    int n,d,i,sum=0,p=1,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        for(i=1;i<=d;i++)
        {
            p=p*i;
        }
        sum+=p;
        n=n/10;
        p=1;
    }
    n=temp;
    if(sum==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}
#include<stdio.h>
int main()
{
    int n,d,sum=0,product=1;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        sum+=d;
        product*=d;
        n=n/10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}
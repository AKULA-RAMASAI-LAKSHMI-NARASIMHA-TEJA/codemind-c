#include<stdio.h>
int main()
{
    int n,sq,sum=0,d;
    scanf("%d",&n);
    sq=n*n;
    while(sq)
    {
        d=sq%10;
        sum+=d;
        sq=sq/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
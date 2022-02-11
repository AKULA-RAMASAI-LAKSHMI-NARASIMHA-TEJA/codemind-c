#include<stdio.h>
int main()
{
    int n,d,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    n=temp;
    if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
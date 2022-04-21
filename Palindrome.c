#include<stdio.h>
int main()
{
    int n,temp,d,rev=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        rev=rev*10 +d;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
#include<stdio.h>
int isprime(int n)
{
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
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
    int n,d,rev=0;
    scanf("%d",&n);
    if(isprime(n))
    {
        while(n)
        {
            d=n%10;
            rev=rev*10 +d;
            n=n/10;
        }
        if(isprime(rev))
        {
            printf("circular prime");
        }
        else
        {
            printf("prime but not a circular prime");
        }
        
    }
    else
    {
        printf("not prime");
    }
}
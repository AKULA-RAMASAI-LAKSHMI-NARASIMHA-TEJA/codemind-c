#include<stdio.h>
int main()
{
    int n,d,s=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        s+=d;
        n=n/10;
        if(n==0 && s>9)
        {
            n=s;
            s=0;
        }
    }
    printf("%d",s);
    return 0;
}
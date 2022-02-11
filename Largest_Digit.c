#include<stdio.h>
int main()
{
    int n,l=0,d;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        if(l<d)
        {
            l=d;
        }
        n=n/10;
    }
    printf("%d",l);
    return 0;
}
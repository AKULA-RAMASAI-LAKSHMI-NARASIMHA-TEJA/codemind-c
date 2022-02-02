#include<stdio.h>
int main()
{
    int n,m=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            m++;
        }
    }
    if(m==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
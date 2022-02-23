#include<stdio.h>
int main()
{
    int n,d=1,i,c;
    scanf("%d",&n);
    c=n;
    while(c)
    {
        for(i=d;i<=n;i++)
        {
            printf("%d ",i);
        }
        printf("
");
        d=d+1;
        if(d>n)
        {
            c=0;
        }
    }
}
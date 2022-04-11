#include <stdio.h>
int main()
{
    int n;
    float i,x,Y;
    scanf("%d",&n);
    x=0;
    for (i=1;i<=n;i++)
    {
        Y=1/i;
        x=x+Y;
    }
    printf("%.2f",x);
}
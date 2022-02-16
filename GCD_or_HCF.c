#include<stdio.h>
int main()
{
    int x,y,i,lcm;
    scanf("%d%d",&x,&y);
    for(i=1;i<=x&&i<=y;i++)
    {
        if(x%i==0&&y%i==0)
        lcm=i;
    }
    printf("%d",lcm);
    return 0;
}
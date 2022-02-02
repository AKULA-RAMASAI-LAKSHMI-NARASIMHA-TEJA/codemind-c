#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,temp,c;
    scanf("%d%d%d",&x,&y,&m);
    temp=pow(x,y);
    c=temp%m;
    printf("%d",c);
}
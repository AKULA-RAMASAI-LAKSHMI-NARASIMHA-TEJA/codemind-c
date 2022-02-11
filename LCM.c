#include<stdio.h>
int main()
{
    int a,b,c=2,lcm=1;
    scanf("%d%d",&a,&b);
    while(1)
    {
        if(a%c==0 && b%c==0)
        {
            a=a/c;
            b=b/c;
            lcm=lcm*c;
        }
        else
        {
            c++;
        }
        if(a<c || b<c)
        {
            break;
        }
    }
    printf("%d",lcm*a*b);
}
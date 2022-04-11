#include<stdio.h>
int main()
{
    int a,b,e=0,o=0;
    scanf("%d",&a);
    while(a)
    {
        b=a%10;
        if(b%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        a=a/10;
    }
    if(e>0 && o==0)
    {
        printf("Even");
    }
    else if(e==0 && o>0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
    return 0;
    
    return 0;
}
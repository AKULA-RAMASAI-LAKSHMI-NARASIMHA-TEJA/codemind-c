#include<stdio.h>
int main()
{
    int n,i,temp;
    scanf("%d",&n);
    temp=n;
    while(temp)
    {
        for(i=n;i>=1;i--)
        {
            printf("%d ",i);
        }
        printf("
");
        temp=temp-1;
    }
}
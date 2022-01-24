#include<stdio.h>
int main()
{
    int N,sum;
    scanf("%d",&N);
    if(1<=N<=1000)
    {
        sum=N*(N+1)/2;
        printf("%d",sum);
    }
    return 0;
}
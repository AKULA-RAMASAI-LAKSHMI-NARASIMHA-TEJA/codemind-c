#include<stdio.h>
int main()
{
    int n,a[100],i,c1=0,c2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    printf("%d %d",c1,c2);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,m,a[10][10],i,j,o,e;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]%2==0)
            {
                e+=a[i][j];
            }
            else
            {
                o+=a[i][j];
            }
        }
    }
    printf("%d %d",e,o);
}
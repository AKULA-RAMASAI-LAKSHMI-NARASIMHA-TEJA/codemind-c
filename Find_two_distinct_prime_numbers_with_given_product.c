#include<stdio.h>
int fun(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c+=1;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,a[100],c=0,i,j,m;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0 && fun(i))
        {
            a[c]=i;
            c++;
        }
    }
    for(i=c;i>=0;i--)
    {
        m=0;
        for(j=c;j>=0;j--)
        {
            if(a[i]*a[j]==n)
            {
                m++;
                break;
            }
        }
        if(m!=0)
        {
            break;
        }
    }
    if(a[i]*a[j]==n)
    {
        printf("%d %d",a[j],a[i]);
    }
    else
    {
        printf("-1");
    }
}
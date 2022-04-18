#include<stdio.h>
int isprime(int num)
{
	int i,fc=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			fc++;	
		}	
	}
	if(fc==2)
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
    int n1,n2,n3,np,sum;
    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    for(np=sum+1;;np++)
    {
        if(isprime(np))
        {
            break;
        }
    }
    printf("%d",np-sum);
}
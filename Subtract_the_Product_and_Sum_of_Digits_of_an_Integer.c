#include<stdio.h>
int main()
{
	int n,s=0,p=1,d,res;
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		s=s+d;
		p=p*d;
		n=n/10;
	}
	res=p-s;
	printf("%d",res);
	return 0;
}
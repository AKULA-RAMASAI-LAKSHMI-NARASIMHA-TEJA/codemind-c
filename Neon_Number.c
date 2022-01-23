#include<stdio.h>
int main()
{
	int n,ns,s=0,d;
	scanf("%d",&n);
	ns=n*n;
	while(ns!=0)
	{
		d=ns%10;
		s=s+d;
		ns=ns/10;
	}
	if(s==n)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
}
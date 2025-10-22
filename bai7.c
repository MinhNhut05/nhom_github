#include<stdio.h>

void tinhgiaithua(int n)
{
	int gt=1;
	int i=1;
	if(n<0)
	{
		printf("k tinh");
	}
	else if( n == 0 )
	{
		printf("0! = 1");
	}
	else
	{
		for(i;i<=n;i++)
		{
			gt = gt*i;
		};
		printf("%d!=%d",n,gt);
	}
}

void nhapso()
{
	int n,kq;
	printf("nhap so: ");
	scanf("%d",&n);
	tinhgiaithua(n);
	
}

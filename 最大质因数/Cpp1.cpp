#include<stdio.h>
void main()
{
	int n,i;
		printf("这个数为：");
	scanf("%d",&n);
	for(i=n-1;i>1;i--)
	{
		if(n%i==0)
			break;
	}
		printf("最大的质因数为：%d",i);
		return;
}


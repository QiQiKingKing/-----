#include<stdio.h>
void main()
{
	int n,i;
		printf("�����Ϊ��");
	scanf("%d",&n);
	for(i=n-1;i>1;i--)
	{
		if(n%i==0)
			break;
	}
		printf("����������Ϊ��%d",i);
		return;
}


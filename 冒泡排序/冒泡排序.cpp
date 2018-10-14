#include<stdio.h>
#define size 10
int main()
{
	int a[size]={11,21,22,7,8,14,7,5,33,2};
	int i,j,t;
	for(i=0;i<10;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
			    a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
}

			    
		       

#include<stdio.h>
int main()
{
	int a[] = {3,2,5,3,5,4,2,3,5,4,2,3,4,2,4,5,3,2,2,3,3};
	int n = sizeof(a)/sizeof(a[0]);
	int i=0;
	
	int b=0;
	for(i=0;i<n;i++)
	{
		b=b^a[i];
	}
	printf("%d element repeat odd times %d",b,a[-1]);
}

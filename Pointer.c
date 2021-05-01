#include<stdio.h>
#include<conio.h>
int main()
{
	int a=50;
	int *p;
	p=&a;
	int **q;
	q=&p;
	printf("%d\t%d\t%d\n",a,p,q);
	printf("%d\t%d\t%d\n",a,*p,*q);
	printf("%d\t%d\t%d\n",a,*p,**q);
	return 0;
}

#include<stdio.h>
int main(){
	int a[]={12,23,34,45};
	int (*p)[5];
	p=&a;
	printf("%d\t%d\t%d",a,p,*p);
	
}

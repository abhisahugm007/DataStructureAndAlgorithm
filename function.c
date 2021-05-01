#include<conio.h>
#include<stdio.h>
//int swap(int *a,int *b){
//	
//
//	*a=*a+*b;
//	*b=*a-*b;
//	*a=*a-*b;
//}
//int main(){
//	int a,b,x=0;
//	a=10;
//	b=20;
//	printf("%d\t%d\n",a,b);
//	x=swap(&a,&b);
//	
//	printf("%d\t%d\n",x,swap(&a,&b));
//}
int *f(){
	int n=100;
//	printf("Hello n %d\t",n);
	return &n;
}

int main(){
	int *x;
	x=f();
	
	printf("%d",x);
//	f();
//	p();
}

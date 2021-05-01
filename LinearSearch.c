#include<stdio.h>

int LinearSearch(int *p,int n,int e){
	int i;
	for(i=0;i<n;i++){
		if(p[i]==e)
			return 1;
	}
	return 0;
}
int main()
{
	int a[]={12,56,98,36,75,1,2,68,87,99,54,18,34};
	int n=sizeof(a)/sizeof(a[0]);
	int e;
	printf("Enter element for search: ");
	scanf("%d",&e);
	
	if(LinearSearch(a,n,e))
		printf("Element found");
	else
			printf("Element not found");

}

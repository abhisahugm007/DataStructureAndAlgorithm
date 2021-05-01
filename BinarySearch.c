#include<stdio.h>

int BinarySearch(int *a,int low,int high,int e,int *count){
	int mid;
	while(low<=high)
	{
		*count=*count+ 1;
		mid=(low+high)/2;
		if(a[mid]==e)
			return mid;
		else if(e<a[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return 0;
}


int main()
{
	int a[] = {12,23,34,45,56,67,78,90,98,123};
	int n = sizeof(a)/sizeof(a[0]);
	int e,count=0;
	printf("Enter element to search: ");
	scanf("%d",&e);
	int result = BinarySearch(a,0,n,e,&count);
	if(result!=0)
		printf("Element Found at %d \n count %d",result,count);
	else
		printf("Element not found\n count %d ",count);
}

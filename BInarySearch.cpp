#include<stdio.h>

int BinarySearch(int a*,int low,int high,int e){
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(mid==e)
			return 1;
		else if(e<mid)
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
	int e;
	printf("Enter element to search");
	scanf("%d",&e);
	int result = BinarySearch(a,0,n,e);
	if(result)
		printf("Element Found");
	else
		printf("Element not found");
}

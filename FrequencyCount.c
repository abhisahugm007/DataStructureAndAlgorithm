// print frequency of each distinct element


#include<stdio.h>
#include<limits.h>


void FrequencyCount(int *a,int n){
	int i,max=INT_MIN;
	for(i=0;i<n;i++){
		
		if(max<a[i])
			max=a[i];
	}
	int *b;
	b=(int *)calloc(max+1,sizeof(int));
	for(i=0;i<n;i++){
		++b[a[i]];
	}
	for(i=0;i<n;i++){
		if(b[i]!=0)
		printf("%d--->%d\n",i,b[i]);
	}
}
int main()
{
	int a[]={2,5,3,5,2,4,2,7,10,2,4,2,3};
	int n=sizeof(a)/sizeof(a[0]);
	FrequencyCount(a,n);
}

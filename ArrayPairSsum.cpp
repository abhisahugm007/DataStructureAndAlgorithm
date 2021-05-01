#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
//BrutForce Tech
//

//						O(n*n)
//
//
//
//void FindPair(int *a,int n,int sum){
//	int i,j;
//	for(i=0;i<n-1;i++){
//		for(j=i+1;j<n;j++){
//			if((a[i]+a[j])==sum)
//				printf("Pair found");
//				return;
//		}
//	}
//	printf("Pair not Found");
//}




//			O(nlon(n))
//void FindPair(int *a,int n,int sum)
//{
//	sort(a,a+n);  //nlog(n)
//	int low=0,high=n-1;
//	while(low<high)
//	{
//		if(a[low]+a[high]==sum){
//			printf("Pair Found");
//			return;
//		}
//		else if((a[low]+a[high])>sum)
//		{
//			high=high-1;
//		}
//		else
//		low=low+1;
//	}
//}


void FindPair(int *a,int n,int sum){
	unordered_map<int,int> map;
	
	for(int i=0;i<n;i++){
		if(map.find(sum - a[i])!=map.end()){
			cout<<"Pair Found "<<sum-a[i]<<" "<<a[i];
			return;
		}
		map[a[i]]=i;
	}
	
}

int main(){
	int a[] = {5,2,8,6,1,9};
	int n=sizeof(a)/sizeof(a[0]);
	int sum=10;
	FindPair(a,n,sum);
}






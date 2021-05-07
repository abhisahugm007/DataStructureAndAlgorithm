#include<iostream>
#include<unordered_set>
using namespace std;

int FindSubarrayWithZeroSum(int *a,int n){
	int i;
	unordered_set<int> set;
	set.insert(0);
	 int sum=0;
	 for(i=0;i<n;i++){
	 	sum+=a[i];
	 	if(set.find(sum)!=set.end()){
	 		return 1;
		 }
		 else{
		 	set.insert(sum);
		 }	
	 }
	 return 0;
}

int main(){
	int a[]={3,4,-7,3,1,3,1,-4,-2,-2};
	int  n=sizeof(a)/sizeof(a[0]);
	
	if(FindSubarrayWithZeroSum(a,n))
		cout<<"Yes";
	else
	cout<<"No";
}

#include<iostream>
#include<stdio.h>
using namespace std;
//int matrix_read(int**,int,int);

void matrix_read(int m, int n,int *A)
{
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>*((A+i*n) + j);
		}
	}
}
int main(){
	int m,n;
	cout<<"Enter number of row and coulem";
	cin>>m>>n;
	int A[m][n];
	matrix_read(m,n,&A[0][0]);
	cout<<"MAtrix is :"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

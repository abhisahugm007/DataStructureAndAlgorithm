#include<stdio.h>

int n;
int BubbleSort(int *a,int n){
	
	int i,j,temp,f;
	for(i=0;i<n;i++)
	{
		f=0;
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				f=1;
			}
		}
		if(f==0){
			break;
		}
	}
}


int RecurciveBubbleSort(int *a,int n)
{
	int temp,i;
	if(n==0)
	{
		return;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	RecurciveBubbleSort(a,n-1);
	
}



int SelectionSort(int *a,int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}

			//Insertion Sort
void InsertionSort(int *a,int n){
	int i,j,temp;
	i=1;
	while(i<n){
		j=i-1;
		temp=a[i];
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
		i++;
	}
}



//
//void Merge(int *a,int *b,int n1,int n2)
//{
//	int i=0,j=0,k=0;
//	int c[n1+n2];
//	while(i<n1 && j<n2)
//	{
//		if(a[i] > b[j])
//		{
//			c[k]=a[i];
//			i++;
//		}
//		else
//		{
//			c[k]=b[j];
//			j++;
//		}
//		k++;
//	}
//	
//	while(i<n1)
//	{
//		c[k++]=a[i++];
//	}
//	while(j<n2)
//	{
//		c[k++]=b[j++];
//	}
//}


		//Merge Sort
void Merge(int *a,int low,int mid,int high)
{
	int i=0,j=0,k=0;
	int *c;
	c=(int *)calloc(20,sizeof(int));
	
	
	
	
	free(c);		
}


void MergeSort(int *a,int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(high+low)/2;
		
		MergeSort(a,low,mid);
		
		MergeSort(a,low,mid);
		
		Merge(a,low,mid,high);
	}
}

int main()
{
	int a[]={38,27,40,3,9,82,10};
	n=sizeof(a)/sizeof(a[0]),i;
//	BubbleSort(a,n);
//	RecurciveBubbleSort(a,n);
	
//	SelectionSort(a,n);
	
	InsertionSort(a,n);
	
	
	MergeSort(a,0,n-1);
	
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);	
}

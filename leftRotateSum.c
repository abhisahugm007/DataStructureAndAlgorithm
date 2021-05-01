
//	     o(n*n)



//int main()
//{
//	int a[]={5,4,1,9,2},i,j;
//	int n=sizeof(a)/sizeof(a[0]);
////	FrequencyCount(a,n);
////	printf("%d",a[13]);
//	for(i=0;i<n;i++){
//		int s=0,k=0;
//		for(j=0;j<n;j++){
//			if(i+j<n)
//			s=s+j*a[i+j];
//			else{
//				s=s+j*a[k++];
//			}
//		
//		}
//		printf("Sum%d---->%d\n",i,s);
//	}
//}


//			O(n)

int main()
{
	int a[]={5,4,1,9,2},i,j,sum=0,sumarr=0;
	int n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
		sumarr=sumarr+a[i];
		sum=sum+i*a[i];
	}
	int max=sum;
	printf("%d\n",sum);
	for(i=1;i<n;i++)
	{
		int d=max-sumarr+a[i-1]*n;
		max=d;
		printf("%d\n",d);
	}
}

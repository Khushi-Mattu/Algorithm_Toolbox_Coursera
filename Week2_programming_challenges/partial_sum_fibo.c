#include<stdio.h>
int fibonacci_sum(long int m,long int n){
    long long int arr[n+1];
	int i;
	arr[0]=0;
	arr[1]=1;
	for (i=2;i<n+1;i++){
		arr[i]=(arr[i-1]+arr[i-2]);
	}	
	long long int sum=0;
	for (i=m;i<n+1;i++){
		sum+=arr[i];
	}
	return sum%10;
}
int main()
{
	long long int m,n;
	scanf("%ld",&m);
	scanf("%ld",&n);
	printf("%d",fibonacci_sum(m,n));	
}
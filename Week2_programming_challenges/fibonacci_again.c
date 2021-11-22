#include<stdio.h>
long long int fibonacci(long long int n,long long int m){
    long long int arr[n+1];
	long long int i;
	arr[0]=0;
	arr[1]=1;
	for (i=2;i<n+1;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	return arr[n]%m;
}
int main()
{
	long long int num,m;
	scanf("%lld",&num);
	scanf("%lld",&m);
	printf("%lld",fibonacci(num,m));	
}
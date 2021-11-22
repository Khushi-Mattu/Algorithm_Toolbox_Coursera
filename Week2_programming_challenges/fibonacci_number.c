#include<stdio.h>
long long int fibonacci(int n){
    long long int arr[n+1];
	int i;
	arr[0]=0;
	arr[1]=1;
	for (i=2;i<n+1;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	return arr[n];
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%lld",fibonacci(num));	
}
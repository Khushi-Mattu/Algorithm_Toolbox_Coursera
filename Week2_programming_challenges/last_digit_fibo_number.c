#include<stdio.h>
int fibonacci_last(int n){
    long int arr[n+1];
	int i;
	arr[0]=0;
	arr[1]=1;
	for (i=2;i<n+1;i++)
		arr[i]=(((arr[i-1]%10)+(arr[i-2]%10))%10);
	return arr[n];
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",fibonacci_last(num));	
}
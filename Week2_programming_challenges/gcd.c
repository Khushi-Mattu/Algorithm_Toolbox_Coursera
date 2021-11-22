#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
	long long int c;
	if(b==0){
		return a;
	}
	else{
		c=a%b;
		gcd(b,c);
	}
}
int main()
{
	long long int a,b;
	scanf("%lld",&a);
	scanf("%lld",&b);
	printf("%lld",gcd(a,b));
}
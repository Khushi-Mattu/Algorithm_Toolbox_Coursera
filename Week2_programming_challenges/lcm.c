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
long long int lcm(long long int c,long long int a,long long int b)
{
	return ((a/c)*b);
}
int main()
{
	long long int a,b,c;
	scanf("%lld",&a);
	scanf("%lld",&b);
	c=gcd(a,b);
	printf("%lld",lcm(c,a,b));
}
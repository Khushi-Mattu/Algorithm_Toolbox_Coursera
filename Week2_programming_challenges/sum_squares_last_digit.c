#include<stdio.h>
#include <math.h>
int i;
long long Periodic(long long m) {
	long long a = 0, b = 1, c = a + b;
	for (i = 0; i < m*m; i++) {
		c = (a + b) % m;
		a = b;
		b = c;
		if (a == 0 && b == 1)
			return i + 1;
	}
}
int Solve(long long n, long long m) {
	long long remainder = n % Periodic(m);

	long long first = 0;
	long long second = 1;

	long long res = remainder;
	for (i = 1; i < remainder; i++) {
		res = (first + second) % m;
		first = second;
		second = res;
	}

	return res % m;
}

// Sum Of (Fib[0]^2+Fib[1]^2+.....+Fib[n]^2) = Fib[n]*Fib[n+1]
int main() {
	long long n; 
	scanf("%d",&n);
	printf("%d",(Solve(n + 1,10)*Solve(n,10)) % 10 );
}
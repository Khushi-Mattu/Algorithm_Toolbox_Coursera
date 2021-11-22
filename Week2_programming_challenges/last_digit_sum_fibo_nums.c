#include<stdio.h>
int i;
long long int Periodic(long long int m) {
	long long int a = 0, b = 1, c = a + b;
	for (i = 0; i < m*m; i++) {
		c = (a + b) % m;
		a = b;
		b = c;
		if (a == 0 && b == 1)
			return i + 1;
	}
}
int Solve(long long int n, long long m) {
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
long long Huge_Fibonacci(long long int n) {
	int Last_Digit_Of_nPlus2 = Solve(n + 2, 10);
	int Last_Digit_Of_2 = Solve(2, 10);

	if (Last_Digit_Of_nPlus2 >= Last_Digit_Of_2)
		return (Last_Digit_Of_nPlus2 - Last_Digit_Of_2);
	else
		return ((10 + Last_Digit_Of_nPlus2) - Last_Digit_Of_2);
}
int main() {
	long long int n;
	scanf("%d",&n);
	printf("%lld",Huge_Fibonacci(n));
}
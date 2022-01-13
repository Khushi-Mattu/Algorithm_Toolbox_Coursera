#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <cstdlib>

using namespace std;

long long int Periodic(long long int m) {
	long long int a = 0, b = 1, c = a + b; 
	for (int i = 0; i < m*m; i++) {
		c = (a + b) % m; 
		a = b; 
		b = c; 
		if (a == 0 && b == 1)
			return i + 1; 
	}
}
int Solve(long long int n, long long int m) {
	long long remainder = n % Periodic(m);

	long long first = 0;
	long long second = 1;

	long long res = remainder;

	for (int i = 1; i < remainder; i++) {
		res = (first + second) % m;
		first = second;
		second = res;
	}

	return res % m;
}
int main() {
	long long int n, m; 
	cin >> n >> m; 
	cout << Solve(n, m) << endl;
}
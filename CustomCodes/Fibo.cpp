// CPP Program to print Fibonacci
// series in reverse order
#include <bits/stdc++.h>
using namespace std;

void reverseFibonacci(int n)
{
	int a[n];

	// assigning first and second elements
	a[0] = 0;
	a[1] = 1;

	for (int i = 2; i < n; i++) {

		// storing sum in the
		// preceding location
		a[i] = a[i - 2] + a[i - 1];
	}

	for (int i = n - 1; i >= 0; i--) {

		// printing array in
		// reverse order
		cout << a[i] << " ";
	}
}

// Driver function
int main()
{
	int n = 5;
	reverseFibonacci(n);
	return 0;
}


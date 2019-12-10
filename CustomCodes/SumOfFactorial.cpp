// C++ program to find sum of proper divisor of
// factorial of a number
#include <bits/stdc++.h>
using namespace std;

// function to calculate factorial
int fact(int n)
{
	if (n == 0)
		return 1;
	return n * fact(n - 1);
}

// function to calculate sum of divisor
int div(int x)
{
	int ans = 0;
	for (int i = 1; i<= x; i++)
		if (x % i == 0)
			ans += i;
	return ans;
}

// Returns sum of divisors of n!
int sumFactDiv(int n)
{
	return div(fact(n));
}

// Driver Code
int main()
{
	int n = 4;
	cout << sumFactDiv(n);
}

// This code is contributed
// by Akanksha Rai

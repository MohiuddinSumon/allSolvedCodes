// C++ program to check if given array
// has 2 elements whose sum is equal
// to the given value
#include <bits/stdc++.h>

using namespace std;

void printPairs(int arr[], int arr_size, int sum)
{
	unordered_set<int> s;
	for (int i = 0; i < arr_size; i++) {
		int temp = sum - arr[i];

		if (s.find(temp) != s.end())
			cout << "Pair with given sum " << sum << " is (" << arr[i] << ", " << temp << ")" << endl;

		s.insert(arr[i]);
	}
}

/* Driver program to test above function */
int main()
{
	int A[] = { 1, 4, 45, 6, 10, 8 };
	int n = 16;
	int arr_size = sizeof(A) / sizeof(A[0]);

	// Function calling
	printPairs(A, arr_size, n);

	return 0;
}


// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
#define ll long long

// Function that returns true if the num contains
// a and b digits only
int check(int num, int a, int b)
{
	while (num) {
		int rem = num % 10;
		num /= 10;
		if (rem != a && rem != b)
			return 0;
	}
	return 1;
}

// Modular Exponentiation
ll power(ll x, ll y)
{
	ll ans = 1;
	while (y) {
		if (y & 1)
			ans = (ans * x) % MOD;
		y >>= 1;
		x = (x * x) % MOD;
	}
	return ans % MOD;
}

// Function to return the modular inverse
// of x modulo MOD
int modInverse(int x)
{
	return power(x, MOD - 2);
}

// Function to return the required count
// of numbers
ll countNumbers(int n, int a, int b)
{
	ll fact[MAX], inv[MAX];
	ll ans = 0;

	// Generating factorials of all numbers
	fact[0] = 1;
	for (int i = 1; i < MAX; i++) {
		fact[i] = (1LL * fact[i - 1] * i);
		fact[i] %= MOD;
	}

	// Generating inverse of factorials modulo
	// MOD of all numbers
	inv[MAX - 1] = modInverse(fact[MAX - 1]);
	for (int i = MAX - 2; i >= 0; i--) {
		inv[i] = (inv[i + 1] * (i + 1));
		inv[i] %= MOD;
	}

	// Keeping a as largest number
	if (a < b)
		swap(a, b);

	// Iterate over all possible values of s and
	// if it is a valid S then proceed further
	for (int s = n; s <= 9 * n; s++) {
		if (!check(s, a, b))
			continue;

		// Check for invalid cases in the equation
		if (s < n * b || (s - n * b) % (a - b) != 0)
			continue;
		int numDig = (s - n * b) / (a - b);
		if (numDig > n)
			continue;

		// Find answer using combinatorics
		ll curr = fact[n];
		curr = (curr * inv[numDig]) % MOD;
		curr = (curr * inv[n - numDig]) % MOD;

		// Add this result to final answer
		ans = (ans + curr) % MOD;
	}
	return ans;
}

// Driver Code
int main()
{
	int n = 3, a = 1, b = 3;
	cout << countNumbers(n, a, b);

	return 0;
}


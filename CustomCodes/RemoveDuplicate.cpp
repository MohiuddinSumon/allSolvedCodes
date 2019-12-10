// CPP program to remove duplicate character
// from character array and print in sorted
// order
#include <bits/stdc++.h>
using namespace std;

char *removeDuplicate(char str[], int n)
{
// Used as index in the modified string
int index = 0;

// Traverse through all characters
for (int i=0; i<n; i++) {

	// Check if str[i] is present before it
	int j;
	for (j=0; j<i; j++)
		if (str[i] == str[j])
		break;

	// If not present, then add it to
	// result.
	if (j == i)
		str[index++] = str[i];
}

return str;
}

// Driver code
int main()
{
char str[]= "geeksforgeeks";
int n = sizeof(str) / sizeof(str[0]);
cout << removeDuplicate(str, n);
return 0;
}


// C++ program to print all elements that
// appear more than once.
#include <iostream>
using namespace std;

// function to find repeating elements
void printRepeating( int arr[], int n)
{
	// First check all the values that are
	// present in an array then go to that
	// values as indexes and increment by
	// the size of array
	for (int i = 0; i < n; i++)
	{
		int index = arr[i] % n;
		arr[index] += n;
	}

	// Now check which value exists more
	// than once by dividing with the size
	// of array
	for (int i = 0; i < n; i++)
	{
		if ((arr[i]/n) > 1)
			cout << i << " ";
	}
}

// Driver's code
int main()
{
	int arr[] = {1, 6, 3, 1, 3, 6, 6};
	int arr_size = sizeof(arr)/sizeof(arr[0]);

	cout << "The repeating elements are: \n";
	printRepeating( arr, arr_size);
	return 0;
}


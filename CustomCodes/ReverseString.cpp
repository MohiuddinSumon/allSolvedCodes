// CPP program to reverse a string
#include <stdio.h>

// Function to reverse any sequence
// starting with pointer begin and
// ending with pointer end
void reverse(char* begin, char* end)
{
	char temp;
	while (begin < end) {
		temp = *begin;
		*begin++ = *end;
		*end-- = temp;
	}
}

// Function to reverse words*/
void reverseWords(char* s)
{
	char* word_begin = s;

	// Word boundary
	char* temp = s;

	// Reversing individual words as
	// explained in the first step
	while (*temp) {
		temp++;
		if (*temp == '\0') {
			reverse(word_begin, temp - 1);
		}
		else if (*temp == ' ') {
			reverse(word_begin, temp - 1);
			word_begin = temp + 1;
		}
	}

	// Reverse the entire string
	reverse(s, temp - 1);
}

// Driver Code
int main()
{
	char s[] = "i like this program very much";
	char* temp = s;
	reverseWords(s);
	printf("%s", s);
	getchar();
	return 0;
}


// C++ program to print reverse
// of words in a string.
#include<iostream>

using namespace std;

string wordReverse(string str)
{
	int i = str.length() - 1;
	int start, end = i + 1;
	string result = "";

	while(i >= 0)
	{
		if(str[i] == ' ')
		{
			start = i + 1;
			while(start != end)
				result += str[start++];

			result += ' ';

			end = i;
		}
		i--;
	}
	start = 0;
	while(start != end)
		result += str[start++];

	return result;
}

// Driver code
int main()
{
	string str = "I AM A GEEK";

	cout << wordReverse(str);

	return 0;
}

// This code is contributed
// by Imam

// A Simple C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
	int n = str.length();

	// Swap character starting from two
	// corners
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

// Driver program
int main()
{
	string str = "geeksforgeeks";
	reverseStr(str);
	cout << str;
	return 0;
}

// C++ program to print reverse of a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverse(string str)
{
for (int i=str.length()-1; i>=0; i--)
	cout << str[i];
}

// Driver code
int main(void)
{
	string s = "GeeksforGeeks";
	reverse(s);
	return (0);
}


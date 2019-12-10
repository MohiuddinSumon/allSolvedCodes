#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int key, int low, int high)
{
    if(low>high) return -1;
    int mid = (low+high)/2;
    //cout<<mid<<endl;
    if(arr[mid] < key) BinarySearch(arr,key,mid+1,high);
    else if(arr[mid] > key) BinarySearch(arr,key,low,mid);
    else return mid;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    int key;
    cin>>key;

    int res = BinarySearch(arr,key,0,n-1);
    for(int i=0; i<n; i++)cout<<arr[i]<<' ';

    cout<<endl<<res<<endl;

    return 0;
}


// C program to implement recursive Binary Search
#include <stdio.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle
		// itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? printf("Element is not present in array")
				: printf("Element is present at index %d",
							result);
	return 0;
}

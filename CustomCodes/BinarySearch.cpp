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

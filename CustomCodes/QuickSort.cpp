#include<bits/stdc++.h>
using namespace std;

int partitionArray(int arr[], int left, int right)
{
    int pivot = arr[(left+right)/2];

    while(left <= right)
    {
        while(arr[left]<pivot)left++;
        while(arr[right]>pivot)right--;
        if(left<=right)
        {
            swap(arr[left],arr[right]);
            left++,right--;
        }
    }

    return left;
}

void QuickSort(int arr[], int left, int right)
{
    int index = partitionArray(arr,left,right);
    if(left<index-1)QuickSort(arr,left,index-1);
    if(right>index) QuickSort(arr,index,right);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    QuickSort(arr,0,n-1);
    for(int i=0; i<n; i++)cout<<arr[i]<<' ';


    return 0;
}

#include<bits/stdc++.h>
using namespace std;


void mergeParts(int arr[], int len, int low, int mid, int high)
{
    int temp[len];
    for(int i=0; i<len; i++)temp[i]=arr[i];

    int left = low;
    int right = mid+1;
    int current = low;

    while(left<=mid && right<=high)
    {
        if(temp[left] <= temp[right]){arr[current]=temp[left]; left++;}
        else {arr[current] = temp[right]; right++;}
        current++;
    }
    while(left<=mid){arr[current]=temp[left]; left++;current++;}
    while(right<=high){arr[current]=temp[right]; right++;current++;}

}

void mergeSort(int arr[],int len, int low, int high) /// also array can be passed with pointer
{
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(arr,len,low,mid);
        mergeSort(arr,len,mid+1,high);
        mergeParts(arr,len,low,mid,high);
    }
}

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}


int main()
{
    int n,t;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    cout << "Array before Sorting: ";
    display(arr, n);
    mergeSort(arr,n, 0, n-1);     //(n-1) for last index
    cout << "Array after Sorting: ";
    display(arr, n);


    return 0;
}

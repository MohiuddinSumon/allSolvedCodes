#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vect;
    srand(time(0)); // optional initialize the random number generator
    for(int i=0; i<100; i++)
    {
        vect.push_back(rand()%100 + 1);//generates random between 1 to 100,
    }
    sort(vect.begin(),vect.end());
    int mn = vect[0];
    int mx = vect[vect.size()-1];
    cout<<"Min = "<<mn<<" Max = "<<mx<<endl;

    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n, greater<int>()); //reverse sort

    sort(arr, arr+n);



    return 0;
}

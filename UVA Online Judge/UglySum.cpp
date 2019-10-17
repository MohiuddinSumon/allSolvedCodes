#include<iostream>

using namespace std;

int main()
{
    int i,j,num,show;

    cin >> num;
    show=num;
    while(num%2 == 0 )
    {
        num=num/2;
    }
    while (num%3 == 0)
    {
        num = num/3;
    }
    while(num%5 == 0)
    {
        num = num/5;

    }
    if(num<5)
        cout << show <<" is an Ugly number." << endl;
    else
        cout << show <<" is not an Ugly number." << endl;


    return 0;
}

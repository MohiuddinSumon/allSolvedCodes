#include<iostream>
#include<cstdio>
#include<cmath>
#define pi acos(-1)

using namespace std;

int main()
{
    int testCase;
    double length,width,radious;
    cin >> testCase;

    for(int i=0; i<testCase; i++)
    {
        cin >> length;
        width=(3*length)/5;
        radious=(length/5);
        double red = pi*radious*radious;
        double green = length * width - red;

        printf("%.2lf %.2lf\n",red,green);
    }

    return 0;
}

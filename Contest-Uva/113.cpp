#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    double power,result;
    int base;
    while(scanf("%lf%lf",&power,&result)==2)
    {
        base=pow(result,(1/(power*1.0)));
        cout << base <<endl;
    }

    return 0;
}


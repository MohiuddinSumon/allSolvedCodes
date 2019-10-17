#include<bits/stdc++.h>
using namespace std;
#define s(n,m,o) scanf("%lf%lf%lf",&n,&m,&o)
#define pf printf

int main()
{
    double s,a,b,c,inRadious,Triangle_area;
    while(s(a,b,c)==3)
    {
        s=((a+b+c)/2.0);
        if(s!=0)
        {
            Triangle_area=sqrt(s*(s-a)*(s-b)*(s-c));
            inRadious = (Triangle_area / s);
            pf("The radius of the round table is: %.3f\n",inRadious);
        }
        else
            pf("The radius of the round table is: 0.000\n");
    }

    return 0;
}


#include<iostream>
#include<cstdio>
#include<cmath>

#define PI 3.14159265359
#define s(n,m,o) scanf("%lf%lf%lf",&n,&m,&o)
#define pf printf

using namespace std;

int main()
{
    double s,a,b,c,outRadious,inRadious,Triangle_area,circumCircle_area, inscribedCircle_area,colour_Triangle;
    while(s(a,b,c)==3)
    {
        s=((a+b+c)/2.0);
        Triangle_area=sqrt(s*(s-a)*(s-b)*(s-c));
        outRadious = (a*b*c)/(4.0*Triangle_area);
        inRadious = (Triangle_area / s);
        circumCircle_area = (PI*pow(outRadious,2))-Triangle_area;
        inscribedCircle_area = (PI*pow(inRadious,2));
        colour_Triangle = Triangle_area-inscribedCircle_area;

        pf("%.4f %.4f %.4f\n",circumCircle_area,colour_Triangle,inscribedCircle_area);
    }

    return 0;
}

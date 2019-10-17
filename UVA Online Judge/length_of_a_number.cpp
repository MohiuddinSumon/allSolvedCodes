#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int a,b,resulta,resultb,*p,*q,n,i;
    cin >> a >> b;
    resulta=log10(a)+1;
    resultb=log10(b)+1;
    p=(int *)malloc(resulta+1);
    q=(int *)malloc(resultb+1);
// printf("\n%d\n",sizeof(p));

    cout<<"length of given numbers are "<< resulta <<" and "<< resultb<<endl;

    for(i=0; i<resulta; i++)
    {
        n=a%10;
        a=a/10;
        p[i]=n;

    }

    for(i=resulta-1; i>=0; i--)
    {
        printf("%d ",p[i]);
    }


    for(i=0; i<resultb; i++)
    {
        n=b%10;
        b=b/10;
        q[i]=n;

    }

    for(i=resultb-1; i>=0; i--)
    {
        printf("%d ",q[i]);
    }


    return 0;
}


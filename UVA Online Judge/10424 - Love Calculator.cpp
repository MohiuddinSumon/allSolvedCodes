#include<bits/stdc++.h>
using namespace std;

#define pf printf

int tosingle(int n)
{
    int sum =0;
    while(n)
    {
        sum += (n%10);
        n /= 10;
        if(n==0 && sum>9)
        {
            n=sum;
            sum=0;
        }
    }
    return sum;
}

int main()
{
    string name1,name2;
    int a,b,s1,s2;
    double ratio,x,y;

    while(getline(cin,name1))
    {
        a=b=0;
        getline(cin,name2);
        s1=name1.size();
        s2=name2.size();
        for(int i=0; i<s1; i++)
        {
            if(isalpha(name1[i]))
            {
                a += tolower(name1[i])-96;
            }
        }
        a=tosingle(a);

        for(int i=0; i<s2; i++)
        {
            if(isalpha(name2[i]))
            {
                b +=tolower(name2[i])-96;
            }
        }
        b=tosingle(b);

        if(a>=b && a!=0)
        {
            x=b,y=a;
            ratio=(x/y)*100.00;
            if(ratio>100.00) ratio=100.00;
            pf("%.2f %\n",ratio);
        }
        else if(b>a && b!=0)
        {
            x=a,y=b;
            ratio=(x/y)*100.00;
            if(ratio>100.00) ratio=100.00;
            pf("%.2f %\n",ratio);
        }
        else
        {
            pf("\n\n");
        }
    }

    return 0;
}

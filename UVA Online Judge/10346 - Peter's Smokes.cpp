#include<iostream>
#include<cstdio>

#define s(n,m) scanf("%d%d",&n,&m)
#define pf printf

using namespace std;

int main()
{
    int n,k,sum;
    while(s(n,k)==2)
    {
        sum=n;
        if(k>n)
        {
            pf("%d\n",sum);
        }
        else
        {
            while(n>=k)
            {
                sum+=(n/k);
                n=(n/k)+(n%k);
            }
            pf("%d\n",sum);
        }
    }

    return 0;
}

/*

int Candles(int A, int B) {
  return (A*B-1) / --B;
}

*/


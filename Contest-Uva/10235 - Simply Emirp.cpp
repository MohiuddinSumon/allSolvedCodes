#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define pf printf
#define MAX  1000000

int status[MAX+1];

int rev_int(int n)
{
    int ret=0;
    while(n != 0)
    {
        ret *= 10;
        ret += (n%10);
        n /= 10;
    }
    return ret;
}


int main()
{
    memset(status,0,sizeof(status));

    int sqrtN = int ( sqrt( (double) MAX));

    for(int i=3; i<=sqrtN; i+=2)
    {
        if(status[i] == 0)
        {
            for(int j= i*i; j<= MAX; j += i+i)
            {
                status[j] = 1;
            }
        }
    }

    int n,nrev;
    while(s(n) == 1)
    {
        if(n<10)
        {
            if(n==2) pf("%d is emirp.\n",n);
            else if( status[n] == 0 && n%2!=0)
            {
                pf("%d is emirp.\n",n);
            }
            else
            {
                pf("%d is not prime.\n",n);
            }
        }
        else
        {
            nrev=rev_int(n);
            if(status[n] == 0 && n%2 != 0)
            {
                if(status[nrev] == 0 && nrev%2 != 0 && n != nrev)
                {
                    pf("%d is emirp.\n",n);
                }
                else
                {
                    pf("%d is prime.\n",n);
                }
            }
            else
            {
                pf("%d is not prime.\n",n);
            }

        }
    }

    return 0;
}

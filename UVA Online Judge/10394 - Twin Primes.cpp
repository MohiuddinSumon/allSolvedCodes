#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define pf printf
#define MAX 20000000


int status[MAX/2+1];
int primes[MAX];
int twin_prime[MAX+1][2];

int main()
{
    memset(status,0,sizeof(status));
    memset(twin_prime,0,sizeof(twin_prime));



    int sqrtN = int( sqrt ( (double) MAX) );

    for(int i=3; i<= sqrtN; i+=2)
    {
        if(status[i>>1] == 0)
        {
            for(int j= i*i; j<=MAX; j += i+i)
            {
                status[j>>1] = 1;
            }
        }
    }

    primes[0]=2;

    for(int i=3; i<= MAX; i +=2)
    {
        if(status[i>>1] == 0)
        {
            primes[i>>1] = i;
        }
    }

    int j=1;
    for(int i=0; i<=MAX; i++)
    {
        if(primes[i]+2 == primes[i+1])
        {
            {
                twin_prime[j][0] = primes[i];
                twin_prime[j][1]=primes[i+1];
                j++;
            }
        }
    }

    int n;
    while(s(n)==1)
    {
        pf("(%d, %d)\n",twin_prime[n][0],twin_prime[n][1]);
    }


    return 0;
}

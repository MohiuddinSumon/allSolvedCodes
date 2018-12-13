#include<bits/stdc++.h>
using namespace std;

#define pf printf
#define s2(n,m) scanf("%d%d",&n,&m)
#define s(n) scanf("%d",&n)

#define M 46341

int status[M+1];
int prime[M+1];
int primeFactor[128];
int primeFactorSize;

int divisor[128];
int divisorSize;

int primeFactDivisorFind(int n)
{
    primeFactorSize=0;
    divisorSize=0;
    int count=0;
    int sumDiv=1;

    float a,b;

    int sqrtN = int ( sqrt ( (double) n ));
    for(int i=0; prime[i]<=sqrtN; i++)
    {
        if(n%prime[i] == 0)
        {
            while(n%prime[i] == 0)
            {
                n /= prime[i];
                count++;
            }
            primeFactor[primeFactorSize] = prime[i];
            primeFactorSize++;
            a = pow(prime[i],count+1)-1;
            b = (prime[i]-1);
            divisor[divisorSize] = (int)a/b;
            divisorSize++;
            count=0;
        }
    }

    if(n>1)
    {
        primeFactor[primeFactorSize] = n;
        primeFactorSize++;
        divisor[divisorSize] = n+1;
        divisorSize++;
    }

    for(int i=0; i<divisorSize; i++)
    {
        a=(pow(prime[i],divisor[i]+1)-1);
        b=(prime[i]-1);
        sumDiv *= divisor[i];
    }

    return sumDiv;
}


int main()
{

    memset(status,0,sizeof(status));
    memset(prime,0,sizeof(prime));
    memset(primeFactor,0,sizeof(primeFactor));
    memset(divisor,0,sizeof(divisor));

    for(int i=3; i<=M; i+=2)
    {
        if(status[i>>1] ==0)
        {
            for(int j=i*i; j<=M; j+= i+i)
            {
                status[j>>1] = 1;
            }
        }
    }


    prime[0]=2;
    int j=1;
    for(int i=3; i<=M+100; i+=2)
    {
        if(status[i>>1] == 0)
        {
            prime[j]=i;
            j++;
        }
    }

    int testNo=0,n,m,num,sumDiv,temp;
    while(s(n)==1 && n!=0)
    {
        num=n;
        for(int i=0; i<=n; i++)
        cout<<prime[i]<<endl;

//        testNo++;
//        for(int i=n; i>=0; i--)
//        {
//            sumDiv=primeFactDivisorFind(i);
//            if(sumDiv == n)
//            {
//                pf("Case %d: %d\n",testNo,i);
//                break;
//            }
//            else if(i == 0)
//            {
//                pf("Case %d: -1\n",testNo);
//            }
//        }

    }


    return 0;
}




#include<bits/stdc++.h>
using namespace std;

#define M 10000

int myarray[M+3];

int a, b, c, d, e, f;

long long int fn( int n );

int main()
{

    int n, caseno = 0, cases;
    long long int result;
    memset(myarray, -1, sizeof(myarray));
    scanf("%d", &cases);
    while( cases-- )
    {

        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        result=fn(n);
        memset(myarray, -1 , sizeof(myarray));
        printf("Case %d: %lld\n", ++caseno, result );


    }
    return 0;
}


long long int fn( int n )
{

     if( n == 0 ) return a % 10000007;
     if( n == 1 ) return b % 10000007;
     if( n == 2 ) return c % 10000007;
     if( n == 3 ) return d % 10000007;
     if( n == 4 ) return e % 10000007;
     if( n == 5 ) return f % 10000007;
     if( myarray[n] != -1 )
        return myarray[n];
    else
    {
    myarray[n] = ( (fn(n-1)% 10000007 + fn(n-2)% 10000007 + fn(n-3)% 10000007 + fn(n-4)% 10000007 + fn(n-5)% 10000007 + fn(n-6)% 10000007)% 10000007 );
        return myarray[n];
    }
}

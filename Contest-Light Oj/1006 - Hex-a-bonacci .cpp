#include<bits/stdc++.h>
using namespace std;
int qacount = 0;
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
        //result=fn(n);
        memset(myarray, -1 , sizeof(myarray));
        printf("Case %d: %lld\n", ++caseno, fn(n) );


    }
    return 0;
}


long long int fn( int n )
{
    ++qacount;

   // cout<<" start count = "<< qacount<<" , n = " << n <<endl;
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
       // cout<<"count = "<< qacount <<endl;
        return myarray[n];
    }
        //return myarray[n];
}
/*
result hobe %lld format e
myarray[100000] neya jay na... nileo kaaj kore na
#define M 10000
myarray[M+something] ;
erpor myarray[100000]={0}; ei line er jaygay memset(myarray,-1,sizeof(myarray)) eivabe initialize korte hobe
0 diye korle hobe na
and last kaaj jeta seta holo tmi Modular arithmetic er kono kaaj koro nai.... eta chara right ans ashbe na
size niba 10003 er moto jehetu okhane eitukui bola ache
tmi just precalculate kore prottekta n er jonno ekta array te maan save rakhlei hoye jabe
*/

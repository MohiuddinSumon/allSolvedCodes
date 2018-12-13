#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define sfor(n) for(int i=1; i<=n; i++)
#define pf printf
#define ll long long
#define ull unsigned ll
#define MOD 1000000007
#define pub push_back
#define pob pop_back
#define mem(a,v) memset(a,v,sizeof(a))
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define multimod2(a,b) ((a%MOD)*(b%MOD))%MOD
#define multimod3(a,b,c) ((a%MOD)*(b%MOD)*(c%MOD))%MOD

#define M 1000000000

ll power(ll x,int n )
{
    ll r = 1;
    while( n>0 )
    {
        if (n % 2 != 0 )r = multimod2(x,r);
        x = multimod2(x,x);
        n >>=1;
    }
    return r;
}
double fpower(double x, int n)
{
    double temp = 1.0;
    while(n != 0)
    {
        if( n%2 == 0)temp *= temp;
        else
        {
            if(n>0)temp = x*temp*temp;
            else temp = (temp*temp)/x;
        }
        n /= 2;
    }
    return temp;
}

int status[500];
int arr[20];

int main()
{
    int j=0;
    mem(status,0);
    for(int i=2; i<100; i++)
    {
        int n=i;
        while(n!=0)
        {
            int sqr;
            while(n!=0)
            {
               //  cout<<"n= "<<n<<endl;
                sqr += (n%10)*(n%10);
                cout<<"sqr = "<<sqr<<endl;
                n /= 10;
            }
            if(sqr != 1) arr[j]=sqr;
            for(int k=0; k<j; k++)
            {
                cout<<"arr = "<<arr[k]<<endl;
                if(arr[k]==sqr)
                    break;
            }
            n=sqr;
            j++;

       // cout<<"nn== "<<n<<endl;


        }
        if(n==1) status[i]=1;



    }

//    for(int i=0; i<500; i++)
//    {
//        cout<<status[i]<<endl;
//    }





    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define i64 long long
#define s(n) scanf("%d",&n)
#define pf printf

int main()
{
    int n,sum;
    i64 ones;
    while(s(n)==1)
    {
        if(n==0) pf("0\n");
        else if(n == 1) pf("1\n");
        else
        {
            ones=11;
            sum=0;


            do
            {
               // cout<< ones <<endl;
               // ones=((ones%n)*(10%n)+(1%n))%n;

               // ones = ones*10+1;
                cout<< ones <<endl;//for checking
            }while(ones%n!=0);

            while(ones>0)
            {
                ones /=10;
                sum++;
            }

            pf("%d\n",sum);

        }


    }


    return 0;
}

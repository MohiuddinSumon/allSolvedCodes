#include<iostream>
using namespace std;
int isprime(int s)
{
   for(int i=2;i*i<=s;i++)
       {
           if(s%i==0)
               return 1;
       }
       return 0;
}
int main()
{
   int n,s;
   cin>> n;
   while(n--)
   {
       cin>> s;
       if(s==1||s==0)
           cout<< "No" <<endl;
       else if(isprime(s)==0)
           cout<< "Yes"<<endl;
       else
           cout<< "No" << endl;
   }
   return 0;
}

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a,b,MAX=0,i,temp;
    while(scanf("%d%d",&a,&b)==2)
    {
        MAX=0;

    cout<<a<<" "<<b<<" ";
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    for(i=a;i<=b;i++)
    {
        int n=i;
        int c=1;

        while(n!=1)
        {
            if(n%2 != 0)
            {
              //  printf("%d ",n);
                n=3*n+1;

                c++;

            }
            else
            {
             //   printf("%d ",n);
                n=n/2;

               c++;

            }

        }

       //  printf("%d ",n);
       if(c>MAX)
        {
            MAX=c;
        }




    }
    printf("%d\n",MAX);
    }

    return 0;
}

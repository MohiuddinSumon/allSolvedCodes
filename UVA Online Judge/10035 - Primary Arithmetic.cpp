#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int x,y,c,carry;
    while(scanf("%d%d",&x,&y)==2)
    {
        if (x==0 && y==0)
            break;
        c=carry=0;
        while(x != 0 || y!=0)
        {
            c=(x%10+y%10+c)/10;
            x=x/10;
            y=y/10;
            if(c==1)
                carry++;
        }
        if(carry==0)
        {
            cout <<"No carry operation."<< endl;
        }
        else if(carry==1)
        {
            cout <<"1 carry operation."<< endl;
        }
        else
        {
            cout << carry <<" carry operations." << endl;
        }
    }

    return 0;
}

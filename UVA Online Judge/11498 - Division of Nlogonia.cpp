#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int k,n,m,x,y;
    while(cin >> k)
    {
        if(k==0)
            break;
        cin >> n >> m;
        for(int i=0;i<k;i++)
        {
            cin >> x >> y;

            if(x==n||y==m)
            {
                printf("divisa\n");
                continue;
            }


           // x+=n;
           // y+=m;
            if(x>n)
            {
                if(y>m)
                    printf("NE\n");
                else
                    printf("SE\n");
            }
            else if(x<n)
            {
                if(y>m)
                    printf("NO\n");
                else
                    printf("SO\n");
            }

        }
    }


    return 0;
}

#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int i,test,L,W,H,cas;

    char str[14];
    while(scanf("%d",&test)==1)
    {
        cas=1;
        for(i=0;i<test;i++)
        {
            scanf("%d%d%d",&L,&W,&H);
            if(L*W*H<=8000 && L<=20 && W<=20 && H<=20)
                {
                    printf("Case %d: good\n",cas);
                    cas++;
                    continue;
                }
                else
                {
                    printf("Case %d: bad\n",cas);
                    cas++;
                    continue;
                }

        }
    }

}




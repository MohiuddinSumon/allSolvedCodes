#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int i,amount=0,test,input,line;

    char str[14];
    while(scanf("%d",&test)==1)
    {
        for(i=0;i<test;i++)
        {
            amount=0;
            printf("Case %d:\n",i+1);
            scanf("%d",&line);
            for(int j=0; j<line; j++)
            {


            scanf("%s",str);
            if(strcmp(str,"donate")==0)
                {
                    scanf("%d",&input);
                    amount+=input;
                    continue;
                }
            else if(strcmp(str,"report")==0)
                {
                    printf("%d\n",amount);
                    continue;
                }
            }

        }
    }

}



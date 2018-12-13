#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int i,amount=0,test,input;

    char str[14];
    while(scanf("%d",&test)==1)
    {
        for(i=0;i<test;i++)
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



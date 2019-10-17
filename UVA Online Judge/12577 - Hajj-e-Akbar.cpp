#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int i=1;
    char str[14];
    while(1)
    {
        gets(str);
        if(strcmp(str,"*")==0)
            break;
        if(strcmp(str,"Hajj")==0)
            {
                printf("Case %d: Hajj-e-Akbar\n",i);
                i++;
                continue;
            }
            else if(strcmp(str,"Umrah")==0)
            {
                printf("Case %d: Hajj-e-Asghar\n",i);
                i++;
                continue;
            }
    }

}


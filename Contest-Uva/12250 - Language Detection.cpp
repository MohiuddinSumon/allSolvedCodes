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
        if(strcmp(str,"#")==0)
            break;
        if(strcmp(str,"HELLO")==0)
            {
                printf("Case %d: ENGLISH\n",i);
                i++;
                continue;
            }
        else if(strcmp(str,"HOLA")==0)
            {
                printf("Case %d: SPANISH\n",i);
                i++;
                continue;
            }
            else if(strcmp(str,"HALLO")==0)
            {
                printf("Case %d: GERMAN\n",i);
                i++;
                continue;
            }
            else if(strcmp(str,"BONJOUR")==0)
            {
                printf("Case %d: FRENCH\n",i);
                i++;
                continue;
            }
            else if(strcmp(str,"CIAO")==0)
            {
                printf("Case %d: ITALIAN\n",i);
                i++;
                continue;
            }
            else if(strcmp(str,"ZDRAVSTVUJTE")==0)
            {
                printf("Case %d: RUSSIAN\n",i);
                i++;
                continue;
            }
            else
            {
                printf("Case %d: UNKNOWN\n",i);
                i++;
                continue;
            }

    }


}

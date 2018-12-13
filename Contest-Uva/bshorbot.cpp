#include<iostream>
#include<cstring>
#include<cstdio>
#include<cctype>



using namespace std;

int main()
{
    char a[50],b[50];
    while(gets(a))
    {
        if(strcmp(a,"DONE")==0)
            break;
        tolower(a);
        strcpy(b,a);
        strrev(a);
        cout << "A= " <<a <<"B= " <<b <<endl;
        if(strcmp(a,b)==0)
        {
            cout << "You won't be eaten!" << endl;
        }
        else
        {
            cout <<"Uh oh.." << endl;
        }


    }
}

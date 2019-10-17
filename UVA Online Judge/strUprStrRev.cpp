#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;


void mystrupr(char *str);
void mystrrev(char *str);


int main()
{
    char str[100],ptr[100];
    while(gets(str) )
    {

        mystrupr(str);
        strcpy(ptr,str);
        mystrrev(ptr);
        cout << "Str = " << str << endl;
        cout << "Ptr = " << ptr << endl;

        if(strcmp(ptr,str)!=0)
        {
            cout << str << " -- is not a palindrome." << endl << endl;
        }

        else if(strcmp(ptr,str)==0)
        {
            cout << str << " -- is a regular palindrome." << endl << endl;
        }

    }
    return 0;
}







void mystrupr(char *str)
{
    int length=strlen(str);
    for(int i=0;i<length;i++)
    {
        str[i]=toupper(str[i]);
    }
}


void mystrrev(char *str)
{
    int length,j;
    length=strlen(str);
    cout << "Length = " << length << endl;
    j=length-1;
    for(int i=0;i<length/2;i++)
    {
        char temp;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
}


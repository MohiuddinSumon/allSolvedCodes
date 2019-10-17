#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define sfor(n) for(int i=1; i<=n; i++)
#define aforb(a,b) for(int i=a; i<=b; i++)
#define pf printf
#define ll long long
#define ull unsigned ll
#define MOD 1000000007
#define pub push_back
#define pob pop_back
#define mem(a,v) memset(a,v,sizeof(a))
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define multimod2(a,b) ((a%MOD)*(b%MOD))%MOD
#define multimod3(a,b,c) ((a%MOD)*(b%MOD)*(c%MOD))%MOD

#define s2(n,m) scanf("%s%s",n,m)




int main()
{
    map<string,string> dictionary;
    string line;
    char str[20],ptr[20];
    vector<string> vstr;
    //getchar();
    while(getline(cin,line))
    {
        if(!line.size()) break;
      //  cout<<line<<endl;
        sscanf(line.c_str(),"%s %s",str,ptr);
        //cout<<str<<ptr;
        dictionary[ptr]=str;
        //cout<<dictionary[ptr]<<' '<<str<<endl;;

    }
    while(cin>>str)
    {
        vstr.pub(str);
      //  dictionary[str]=str;
    }
    int lsize=vstr.size();
    for(int i=0; i<lsize; ++i)
    {
        if(dictionary.find(vstr[i])==dictionary.end())
            pf("eh\n");
        else
            cout<<dictionary[vstr[i]]<<endl;
    }


    return 0;
}

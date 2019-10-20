#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //replace(s.begin(),s.end(),'B',' ');

    size_t pos = 0;
    string token,wb,res;
    wb="WUB";
    res="";

    while ((pos = s.find(wb)) != string::npos)
    {
        token = s.substr(0, pos);
        //cout << token << ' ';
        res += token;
        if(token.size() > 0)res+=' ';
        s.erase(0, pos + wb.length());
    }
    //cout << s << endl;
    res+=s;
    cout<<res<<endl;

    return 0;
}

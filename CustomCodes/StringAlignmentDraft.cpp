#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    string str;
    int strSize;
    cin>>str>>strSize;
    cout<<left<<setw(strSize)<<str<<endl;
    cout<<right<<setw(strSize)<<str<<endl;
    cout<<string((strSize-str.size())/2,' ')<<setw(strSize/2)<<str<<endl;
    getchar();
    // The quick brown fox jumps over the zebra!
    */
    string str;
    vector<string>wordList;
    getline(cin,str);
    //cout<<str<<endl;

    stringstream ss;
    ss<<str;
    string t;
    int minSize=str.size();
    while(ss>>t)
    {
        wordList.push_back(t);
        minSize = (t.size()<minSize)?t.size():minSize;
        //cout<<"IN 1 " <<t<<endl;
    }
    cout<<"Give Line size (integer) input"<<endl;
    int lineSize;
    cin>>lineSize;
    if(lineSize < minSize)cout<<"Minimum word size is: "<<minSize<<" Operation terminated."<<endl;
    else {
    cout<<"Left Aligned:"<<endl;

    string result,temp;
    result=temp="";
    stringstream s(str);
    bool flag = true;
    cout<<flag<<endl;
    while(s)
    {
        s>>t;
        flag = true;
        //cout<<" T is "<<t<<endl;
        //cout<<" TEMP is "<<temp<<endl;
        if(temp.size()+t.size() < lineSize) temp+=t+' ';
        else if(temp.size()+t.size() == lineSize) temp+=t;
        else
        {
            if(temp!="")result+=temp+"\n";
            temp = t+' ';
            flag = false;
        }
        //cout<<temp<<endl;
    }
    //cout<<flag<<endl;
    if(flag) result+=temp+"\n";
    cout<<result<<endl;
    temp=result="";

    cout<<"Right Aligned: "<<endl;
    for(int i=0; i<wordList.size(); i++)
    {
        flag = true;
        t=wordList[i];
        //cout<<t<<endl;
        //cout<<" TEMP is "<<temp<<endl;
        if(temp.size()+t.size() < lineSize) temp+=t+' ';
        else if(temp.size()+t.size() == lineSize) temp+=t;
        else
        {
            result+=string(lineSize-temp.size(),' ')+temp+"\n";
            //else result+=temp+"\n";
            temp = t+' ';
            flag = false;
        }
    }
    result+=string(lineSize-temp.size(),' ')+temp+"\n";
    cout<<result<<endl;

    }

    return 0;
}

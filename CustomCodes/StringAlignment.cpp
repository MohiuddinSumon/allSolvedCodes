#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
      vector<string> result;
      vector<string> currStrings;
      int nCurrWidth = 0;
      for(size_t index = 0; index < words.size(); index++) {
        bool bIsFirstWord = currStrings.size() > 0 ? false : true;
        if(nCurrWidth + words[index].size() + (bIsFirstWord ? 0 : 1) <= maxWidth) {
          nCurrWidth += words[index].size() + (bIsFirstWord ? 0 : 1);
          currStrings.push_back(words[index]);
        } else {
          int nNumberOfSpaces = maxWidth - nCurrWidth;
          int spacesPerWord = nNumberOfSpaces / (currStrings.size() > 1 ? (currStrings.size()-1) : 1);
          int extraPadding = nNumberOfSpaces % (currStrings.size() > 1 ? (currStrings.size()-1) : 1);

          string str;
          for(size_t j=0; j<currStrings.size(); j++) {
            if(j > 0) {
              str.push_back(' ');
              for(int k=0; k<spacesPerWord; k++) {
                str.push_back(' ');
              }
              if(extraPadding > 0) {
                str.push_back(' ');
                extraPadding--;
              }
            }
            str.append(currStrings[j]);

            // If the line contains single word, just append spaces
            if(currStrings.size() == 1) {
              for(int k=0; k<spacesPerWord; k++) {
                str.push_back(' ');
              }
              if(extraPadding > 0) {
                str.push_back(' ');
                extraPadding--;
              }
            }
          }

          result.push_back(str);
          index--;
          nCurrWidth = 0;
          currStrings.clear();
        }
      }
      // For the last line we just append spaces
      if(currStrings.size() > 0) {
        string str;
        for(size_t j=0; j<currStrings.size(); j++) {
            if(j > 0) {
              str.push_back(' ');
            }
          str.append(currStrings[j]);
        }
        while(str.size() < maxWidth) {
          str.push_back(' ');
        }
        result.push_back(str);
      }
      return result;
    }
};

int main()
{
    Solution sl;
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

    vector<string> res = sl.fullJustify(wordList,lineSize);
    for(int i=0; i<res.size(); i++)cout<<res[i]<<endl;


    return 0;
}

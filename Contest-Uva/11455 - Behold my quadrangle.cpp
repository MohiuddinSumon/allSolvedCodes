#include<bits/stdc++.h>

#define s(n) scanf("%d",&n)
#define pf printf

using namespace std;
int main()
{
    int testCase,temp;
    vector <int> edges;
    s(testCase);
    while(testCase--)
    {
        for(int i=0;i<4;i++)
        {
            s(temp);
            edges.push_back(temp);
        }

        sort(edges.begin(),edges.end());

        if(edges[0]==edges[1] && edges[2]==edges[3] && edges[1]==edges[2])
            pf("square\n");
        else if(edges[0]==edges[1] && edges[2]==edges[3] && edges[0]!=edges[2])
            pf("rectangle\n");
        else if(edges[0]+edges[1]+edges[2] >= edges[3])
            pf("quadrangle\n");
        else
            pf("banana\n");

        edges.clear();
    }

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define pf printf
#define for(n) for(int i=0; i<n; i++)

int maxSum(int all[], int size)
{
    int max_ending_here = 0 , max_so_far =0;
    for(size)
    {
        max_ending_here += all[i];
        if(max_ending_here < 0)
            max_ending_here = 0;
        else if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main()
{
    int sum,win,caseNo,inp;
    int all_input[10001];
    while(s(caseNo)==1 && caseNo!=0)
    {
        for(caseNo)
        {
            s(inp);
            all_input[i] = inp;
        }
        win=maxSum(all_input,caseNo);

        (win<=0) ? pf("Losing streak.\n") : pf("The maximum winning streak is %d.\n",win);
    }


    return 0;
}

//Kadane algorithm
//www.geeksforgeeks.org/largest-sum-contiguous-subarray

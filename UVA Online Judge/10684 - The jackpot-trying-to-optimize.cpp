//IT's A failure attemp :v

#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define pf printf
#define for(n) for(int i=0; i<n; i++)


int main()
{
    int caseNo,inp;
    int all_input[10001];
    int max_ending_here , max_so_far;
    while(s(caseNo)==1 && caseNo!=0)
    {
        max_ending_here=max_so_far=0;
        for(caseNo)
        {
            s(inp);
            max_ending_here += inp;
            if(max_ending_here < 0)
                max_ending_here = 0;
            else if(max_so_far < max_ending_here)
                max_so_far = max_ending_here;
        }

        (max_so_far<=0) ? pf("Losing streak.\n") : pf("The maximum winning streak is %d.\n",max_so_far);
    }


    return 0;
}

//Kadane algorithm
//www.geeksforgeeks.org/largest-sum-contiguous-subarray


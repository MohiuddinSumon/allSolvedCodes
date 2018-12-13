#include<bits/stdc++.h>
using namespace std;

#define s(n) scanf("%d",&n)
#define pf printf
#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col


char mine[100][100];
int found = 0;
int check( int i, int j )
{
    if( mine[i][j] == '*' )
    {
        found  += 1;
        return found;
    }
    //else if( mine[i][j] == 'X' ) return;
    else
    {
        check(i-1,j);
        check(i,j-1);
        check(i,j+1);
        check(i+1,j);
    }
}










int main()
{
    int fx[]= {+0,+0,+1,-1,-1,+1,-1,+1};
    int fy[]= {-1,+1,+0,+0,+1,+1,-1,-1};
    int x=5,y=3,row=5,col=5,nx,ny;
    for(int k=0; k<8; k++)
    {
        int nx=x+fx[k]; //Add fx[k] with current row
        int ny=y+fy[k]; //Add fy[k] with current col
        if(valid(nx,ny))
        {
            check(nx,ny);
        }
    }


    return 0;
}

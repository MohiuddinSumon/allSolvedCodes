#include<iostream>
#include<cstdio>


using namespace std;



int main()
{
    int row,col,loop=1,i,j,x,y;

    while(loop!=0)
    {


        cin >> row >> col;
        if(row==0 && col==0)
            break;
        char mat[101][101];
        char cat[101][101];


        for( i=0; i<row; i++)
        {
            for( j=0; j<col; j++)
            {
                cin >> mat[i][j] ;
            }
        }



        for( x=0; x<row; x++)
        {
            for( y=0; y<col; y++)
            {
                cat[x][y]=mat[x][y];
            }
        }

        int liveCell;

        for( i=0; i<row; i++)
        {
            for( j=0; j<col ; j++)
            {

                int ix,iy,jx,jy,m,n;

                liveCell=0;

                int temp=0;
                int xLow,yLow;
                int xHigh,yHigh;
                xLow=i-1;
                xHigh=i+1;
                yLow=j-1;
                yHigh=j+1;
                if(xLow<0)
                    xLow=0;
                if(yLow<0)
                    yLow=0;
                if(xHigh>row-1)
                    xHigh--;
                if(yHigh>col-1)
                    yHigh--;


                for(m=xLow; m<=xHigh; m++)
                {

                    for(n=yLow; n<=yHigh; n++)
                    {

                        if(m==i && n==j)
                            continue;
                        if(mat[m][n]=='*')
                            liveCell++;

                    }
                }
                if(cat[i][j]!='*')
                    cat[i][j]=liveCell;
            }
        }

        cout << "Field #" << loop << ":"<<endl;
        for( x=0; x<row; x++)
        {
            for( y=0; y<col; y++)
            {
                if(cat[x][y]=='*')
                    cout << "*";
                else
                    printf("%d",cat[x][y]);

            }
            cout << endl;
        }
        cout <<endl;



        loop++;

    }

    return 0;

}





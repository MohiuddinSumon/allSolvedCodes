#include<iostream>
#include<cstdio>



using namespace std;

int main()
{
    int Perticipents,Budget,Hotels,Weeks,Price[19],ans,temp,Bed[19][14],flag=0;
    while(scanf("%d%d%d%d",&Perticipents,&Budget,&Hotels,&Weeks)==4)
    {
        ans=0;

        for(int i=0; i<Hotels; i++)
        {
            cin >> Price[i];
            for(int j=0; j<Weeks; j++)
            {
                cin >> Bed[i][j];
            }
        }

        for(int i=0; i<Hotels; i++)
        {
            flag=0;
            if(Perticipents*Price[i]<=Budget)
            {

                //cout << Perticipents*Price[i] << endl;
                for(int j=0; j<Weeks; j++)
                {
                    if(flag == -1)
                        break;
                    else
                    {
                        // cout <<"Bed[i][j] = "<< Bed[i][j] <<endl;
                        if(Bed[i][j]<Perticipents)
                            flag=-1;
                        else
                            flag++;
                    }

                    // cout << "Flag = " << flag << "Weeks = "<< Weeks << endl;

                }
                if(flag==Weeks)
                {
                    //cout << "ANS = " <<Perticipents*Price[i]<<endl;

                    temp=Perticipents*Price[i];
                    if(ans==0)
                        ans=temp;
                    else if(temp<=ans)
                        ans=temp;
                }
            }
        }




        if(ans==0)
        {
            cout << "stay home" <<endl;
        }
        else
        {
            cout << ans << endl;
        }


    }

    return 0;
}

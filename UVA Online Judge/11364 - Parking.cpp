#include<iostream>

#include<algorithm>

using namespace std;


void minimumDistance(int i);


int main()
{
    int test,stall,i,j,temp;
    void mimimumDistance(int i);

    cin >>test;

        for(i=0;i<test;i++)
            {
                cin >> stall;
                minimumDistance(stall);
            }
    return 0;
}


void minimumDistance(int stall)
{
    int *distance,j,temp;
    distance=(int *)malloc(stall);
                for(j=0;j<stall;j++)
                    {
                        cin >> temp;
                        distance[j]=temp;
                    }
                sort(distance,distance+stall);
                cout << 2*(distance[stall-1]-distance[0]) << endl;

                free(distance);

}


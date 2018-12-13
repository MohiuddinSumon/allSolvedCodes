#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int testcase,ans,f,farmyeard,animal,premium;
    while(scanf("%d",&testcase)!=EOF)
    {
            for(int i=0;i<testcase;i++)
                {
                    scanf("%d",&f);
                    ans=0;
                    for(int fermar=0;fermar<f;fermar++)
                        {
                            scanf("%d%d%d",&farmyeard,&animal,&premium);
                            ans+=farmyeard*premium;
                        }
                    printf("%d",ans);
                }

    }

    return 0;

}

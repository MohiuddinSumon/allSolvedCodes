#include<stdio.h>

int main()
{
    int t,i,m,n,solar;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d",&n,&m);
        printf("%d\n",(n/3)*(m/3));
    }
    return 0;
}


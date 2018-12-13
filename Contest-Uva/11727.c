#include<stdio.h>



int main()
{
    int test,stall,i,j,temp=0,min=0,max=0,t1,t2;
    while(scanf("%d",&test)==1)
    {
        for(i=0;i<test;i++)
            {
                t1=0,max=0,min=0;
                scanf("%d",&stall);
                scanf("%d",&temp);
                    t1=temp;
                for(j=0;j<stall-1;j++)
                    {
                        scanf("%d",&temp);
                        if(temp<t1)
                        {
                            if(min==0)
                            {
                                min=temp;
                            }
                            else if(temp<min)
                            {
                                min=temp;
                            }

                        }
                        else
                        {
                            if(max==0)
                            {
                                max=temp;
                            }
                            else if(temp>max)
                            {
                                max=temp;
                            }
                        }
                    }
                    if(t1<min || min==0)
                        min=t1;
                    if(t1>max || max==0)
                        max=t1;
                printf("%d",2*(max-min));
                printf("MAX= %d,Min= %d",max,min);

            }
    }
    return 0;
}



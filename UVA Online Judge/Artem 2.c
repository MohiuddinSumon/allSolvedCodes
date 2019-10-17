#include<stdio.h>
#include<string.h>

int main()
{
    int a[100],i,min,n,ans=0,x=0,y=0,z,temp;

    while(scanf("%d",&n)!=EOF)
    {
        ans=0;
      //  printf("n==%d\n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
           // fflush(stdin);
            //printf("a[%d]=%d\n",i,a[i]);
        }

/*
	for( x=0; x<n; x++)
	{
		for( y=0; y<n-1; y++)
		{
			if(a[y]>a[y+1])
			{
				int temp = a[y+1];
				a[y+1] = a[y];
				a[y] = temp;
			}
		}
	}
*/
        for(i=0;i<n;i++)
        {
            printf("a[%d]=%d\n",i,a[i]);
        }



        //min=a[0];
        for(i=2;i<n;i++)
        {
            if(a[0]<=a[i])
                {
                    min=a[0];
                    x+=min;
                }
            else
                {
                    min=a[i];
                    x+=min;
                }
                printf("MIN order== %d\n",min);

        }

         for(i=n-3;i>=0;i--)
        {
            if(a[n-1]>=a[i])
                {
                    min=a[i];
                    y+=min;
                }
            else
                {
                    min=a[n-1];
                    y+=min;
                }
                printf("Max Order== %d\n",min);

        }

        if(x>y)
        printf("\noutput:: %d",x);
        else
            printf("\noutput:: %d",y);


    }
    return 0;
}


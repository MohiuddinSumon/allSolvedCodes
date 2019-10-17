#include<stdio.h>
#include<string.h>

int main()
{
    int a[100],i,min,n,ans=0,x,y,z,temp;

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
        for(i=0;i<n-2;i++)
        {
            if(a[i+2]<=a[i])
                min=a[i+2];
            else
                min=a[i];
                printf("MIN== %d\n",min);
                ans+=min;


        }
        printf("\noutput:: %d",ans);


    }
}

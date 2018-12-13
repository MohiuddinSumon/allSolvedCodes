#include <stdio.h>
#include <conio.h>
int main()
{
    unsigned int min,max,in,buf;
    min=0,max=0;

    printf("\nEnter The Numbers or press Zero to exit.... %u",buf);
    do
    {
        scanf("%u",&in);
        if(in!=0)
        {
            if(in>=max)
            {
                max=in;
            }
            if(in<=buf)
            {
                min=in;
            }
            printf("1st= %u",buf);
            buf=in;
            printf("2nd= %u",buf);
        }
        else
        {
            printf("The Max & Min value Entered are : %u %u",max,min);
            break;
        }
    }while(in!=0);
    return 0;
}

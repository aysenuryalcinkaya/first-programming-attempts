#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ays[10][10];
    int i,j;

    for(i=0;i<10;i++)
    {
         for(j=0;j<10;j++)
         {
             if(i==j)
             {
                 ays[i][j]=1;

             }
             else{
                ays[i][j]=0;
             }
             printf("%5d",ays[i][j]);
         }
         printf("\n");

    }
    return 0;

}

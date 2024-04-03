#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x,y,z;

     printf("Uc aci giriniz");
     scanf("%d%d%d",&x,&y,&z);

     if(x+y+z==180)
     {
         if(x==y &&y==z)
         {
            printf("eskenar ucgen");
         }
         else if(x==y  && y!=z)
         {
             printf("ikizkenar ücgen");
         }
         else if(x!=y && y==z)
         {
             printf("ikizkenar ucgen");
         }
         else if(x==z && y!=z)
         {
             printf("ikizkenar ucgen");
         }
         else
         {
             printf("cesitkenar ucgen");
         }
     }
     else
     {
         printf("ücgen degildir");
     }
    return 0;
}

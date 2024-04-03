#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   int sonuc;
   char ays[15]="abcdef";
   char ayse[15]="abcdef";


   sonuc=strncmp(ayse,ays,4);

   printf("%d",sonuc);

   if(sonuc<0)
   {
      printf("ays ayseden daha kucuktur");
   }
   else if(sonuc>0)
   {
       printf("ays ayseden buyuktur");
   }
   else{
    printf("ikiside esittir");
   }





    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i,a;
   int sonuc=0;
   printf("lutfen bir sayi giriniz");
   scanf("%d",&a);

    i=0;
   while(i<=a)
    {
      if(i%17==0)
      {
          printf("%5d",i);
      }
      i++;
    }



    return 0;
}

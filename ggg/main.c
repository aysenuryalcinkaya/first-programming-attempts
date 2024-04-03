#include <stdio.h>
#include <stdlib.h>
#define thiz 0.038
#define khiz 0.012

int main()
{
    char cumle[100];
    int i=0;

    printf("Lutfen bir cumle giriniz");
    gets(cumle);

    while(cumle[i])
    {

       i++;
    }

    printf("girilen cumledeki karakter sayisi %d",i);







    return 0;
}

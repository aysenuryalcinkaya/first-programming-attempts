#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ays[100];
    char ayse[100];
    int a;

    printf("lutfen bir yazi giriniz\n");
    gets(ays);

    printf("lutfen bir yazi giriniz\n");
    gets(ayse);

    printf("birinci yazinin sonuna kac karakter eklemek istersiniz");
    scanf("%d",&a);

     printf("eklemeden once %s",ays);
     printf("\n birlestirmeden sonra\n");
     strncat(ays,ayse,a);
    printf("%s",ays);
    return 0;
}

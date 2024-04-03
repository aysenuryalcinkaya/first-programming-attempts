#include <stdio.h>
#include <stdlib.h>

int main()
{
    char aa;
    int sonuc;
    printf("Lutfen bir karakter giriniz=");
    scanf("%c",&aa);

    if (('a'<=aa) &&('z'>=aa))
    {
       sonuc=(int)aa-(int)'a'+1;
        printf("alfabenin %d. harfi",sonuc);
    }
    else if(('A'<=aa) && ('Z'>=aa))
    {
        sonuc=(int)aa-(int)'A'+1;
        printf("alfabenin %d. harfi",sonuc);
    }
    else
    {
        printf("bir karakter girmediniz");
    }
    return 0;
}

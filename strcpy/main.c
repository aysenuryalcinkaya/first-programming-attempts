#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ays[]="benim adim asy";
    char ayse[100]="";

    strncpy(ayse,ays,15);
    printf("%s",ayse);
    return 0;
}

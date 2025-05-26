#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main () {
    setlocale(LC_ALL,"");
    printf("Olá");
    return 0;
}
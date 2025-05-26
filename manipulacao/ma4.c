#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printReverso(FILE* file){
    char c = fgetc(file);
    if(c == EOF) return;
    
    printReverso(file);
    if(c != ' ') putchar(c);
}

int main() {
    FILE* file = fopen("text.txt", "r");

    printReverso(file);

    fclose(file);
    return 0;
}
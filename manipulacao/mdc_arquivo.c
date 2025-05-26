#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mdc(int x,int y ) {
    if (x == 0) {
        return y; 
    }
    if (y == 0) {
        return x; 
    }
    if (x > y) {
        return mdc(x-y, y); 
    }
    return mdc(x, y-x); 

}

int main () {
    FILE *file = fopen("mdc.txt","r");
    FILE *file_resultado = fopen("mdc_resultado.txt","a");
    int x,y;
    int resultado;
    while (fscanf(file,"%d %d",&x,&y) == 2) { //ver feof()
        resultado = mdc(x,y);
        fprintf(file_resultado,"%d\n",resultado);
    }
    fclose(file);
    fclose(file_resultado);
    return 0;
}
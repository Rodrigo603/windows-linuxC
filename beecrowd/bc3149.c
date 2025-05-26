#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct morador {
    int hora;
    int minuto;
    char nome[101];
};

int main () {
    int p,q;
    scanf("%d %d",&p,&q);
    char h[101];
    struct morador mora[q];
    for (int i = 0;i<q;i++) {
        scanf("%s",h);
        getchar();
        scanf("%[^\n]",mora[i].nome);
        char horas[3],minutos[3];
        strncpy(horas,h,2);
        strncpy(minutos,h + 3,2);
        horas[2] = '\0';
        minutos[2] = '\0';
        int int_horas = atoi(horas);
        int int_minutos = atoi(minutos);
        if (int_horas == 23) {
            mora[i].hora = 23;
            mora[i].minuto = int_minutos - 60;
        }else {
            mora[i].hora = 00;
            mora[i].minuto = int_minutos;
        }
        
}
    for (int i = 0; i<q - 1;i++) {
        for (int j = 0;j<q -1-i;j++) {
                if (mora[j].minuto>mora[j+1].minuto) {
                    struct morador temp = mora[j];
                    mora[j] = mora[j + 1];
                    mora[j+1] = temp;
                }
            }
        }
    for (int i = 0;i<q;i++) {
            if (mora[i].minuto <= p && mora[i].minuto>=-p) {
                    printf("%s\n",mora[i].nome);
        }
    }
  return 0;
}

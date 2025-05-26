#include <stdio.h>
#include <stdlib.h>

int main () {

    int qtd_partidas,qtd_gols;
    char fez,tomou;
    
    scanf("%d",&qtd_partidas);
    for (int i = 0;i<qtd_partidas;i++) {
        scanf("%d",&qtd_gols);
        int gols_blue = 0;
        int gols_green = 0;
        int gols_red = 0;
            for (int j = 0;j<qtd_gols;j++) {
                scanf(" %c %c",&fez,&tomou);
                if (fez =='R' && tomou =='G') {
                    gols_red+=2;
                }else if (fez == 'R' && tomou =='B') {
                    gols_red+=1;
                }if (fez =='B' && tomou =='R') {
                    gols_blue+=2;
                }else if (fez == 'B' && tomou =='G') {
                    gols_blue+=1;
                }if (fez =='G' && tomou =='B') {
                gols_green+=2;
                }else if (fez == 'G' && tomou =='R') {
                gols_green+=1;
            
  }
 }
    if (gols_blue == gols_green && gols_green == gols_red) {
        printf("trempate\n");
    }   else if (gols_blue > gols_green && gols_blue > gols_red) {
            printf("blue\n");
        } else if (gols_green > gols_blue && gols_green > gols_red) {
            printf("green\n");
        } else if (gols_red>gols_blue && gols_red>gols_green) {
            printf("red\n");
        }else if (gols_red == gols_green || gols_green == gols_blue || gols_red == gols_blue) {
            printf("empate\n");
    }
    

}
return 0;
}
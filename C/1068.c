 // Exercício 1068
#include <stdio.h>
#include <string.h>

int main(){
    char linha[1001];
    int i,aberto, fechado;
    while(scanf("%s",linha) != EOF){
       aberto = 0;
       fechado = 0;
       for(i = 0; i<strlen(linha); i++){
             if(linha[i] == '(') aberto++;
             else if (linha[i] == ')'){
                  fechado++;
                  if(aberto > 0){
                         aberto--;
                         fechado--;
                  }
             }
       }
       if(aberto == 0 && fechado == 0) printf("correct\n");
       else printf("incorrect\n");
    }
    return 0;
}

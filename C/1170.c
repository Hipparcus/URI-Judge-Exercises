#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include <string.h>

//exercicio 1170

int sadef() {
    int N,dias;
    float C;
    scanf("%d",&N);
    while (N>1000||N<=0){
            scanf("%d",&N);
    }
    for (int i=0;i<N;i++){
        dias=0;
        scanf("%f",&C);
        while (C>1000||C<=0){
            scanf("%f",&C);
    }
        while (C>1){
            C=C/2;
            dias++;
        }
        printf("%d dias\n",dias);
    }
    system ("pause");
    return 0;
}

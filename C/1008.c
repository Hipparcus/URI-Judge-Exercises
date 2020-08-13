#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//exercicio 1008

int mvzvcain(){
    int N,horas;
    float vhora;
    scanf("%d %d %f",&N,&horas,&vhora);
    printf("NUMBER= %d\nSALARY= U$ %.2f",N,horas*vhora);
    return 0;
}

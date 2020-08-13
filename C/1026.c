#include <stdio.h>
//Exercício 1026
int main() {
    int unsigned long a,b,c;
    while (scanf("%lu %lu",&a,&b)==2){
        c=(a^b);
        printf("%lu\n",c);
    }
    return 0;
}

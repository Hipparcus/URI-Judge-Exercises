 // Exercício 1029
 #include <stdio.h>
#include <stdio.h>
int cont;

int fib(int n){
    cont++;
    if (n==1) return 1;
    else if(n==0) return 0;
    else return fib(n-1)+fib(n-2);
}

int main(){
    int N,x,i;
    scanf("%d",&N);
    for (i=0;i<N;i++){
        scanf("%d",&x);
        cont=0;
        while (x>40 || x<0){
            scanf("%d",&x);
        }
        printf("fib(%d) = %d calls = %d\n",x,cont-1,fib(x));
}
    return 0;
}

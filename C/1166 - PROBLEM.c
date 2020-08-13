#include <stdio.h>
//Exercício 1166 - PROBLEM

#define INFINITE 10000
int EhPossivel(float v[],int bola,int N){
    int aux,cont=0;
    for (int i=0;i<N;i++){
        aux=v[i];
        if (sqrt(v[i]+bola)!=sqrt(aux+bola)){
            if (v[i]>0) cont++;
        }
    }
    if (cont==N) return 1; //Não há nenhuma vareta sobrando para colocar novas bolas
    else return 2; //Há varetas disponíveis para novas bolas
}

int tentando(){
    int T,N,m=0,bola=1;
    float varetas[51];
    for (int j=0;j<51;j++){
        varetas[j]=0;
    } //começa com todas as varetas com 0 bolas
    printf("Digite a quantidade de testes: ");
    scanf("%d",&T);
    while (T<1||T>50){
        printf("Quantidade invalida, tente novamente\n");
        scanf("%d",&T);
    }
    for (int i=0;i<T;i++){
        printf("Digite a quantidade de varetas\n");
        scanf("%d",&N);
        while (N<1||N>50){
            printf("Quantidade invalida, tente novamente\n");
            scanf("%d",&N);
    }
        while (EhPossivel(varetas,bola,N)!=1){//enquanto ainda seja possivel colocar uma bola na vareta:
            int aux=varetas[m];             //auxiliar=numero de bolas na vareta especifica
            if (varetas[m]==0||sqrt(varetas[m]+bola)==sqrt(aux+bola)){ //se a soma do valor da vareta+bola for quadrado perfeito, adiciona a bola e pegue a bola seguinte
                varetas[m]=bola;
                bola++;  //pega proxima bola
                m=0; //volta para a primeira vareta (pode ser que a nova bola caiba lá)
            }else m++; //se não for quadrado perfeito tente na vareta seguinte
            if (bola>=INFINITE){
                printf("%d",-1);
                break;
            }
        }
        printf("\n%d ",bola);

}
}

//tentando fazer a questao via metodo dinamico push
struct TipoCelula{
    int item;
    TipoCelula *prox;
};

typedef struct{
    TipoCelula Peça;
}Varetas;

TipoCelula *Topo;
int Pilha_Contador;

bool Pilha_Vazia(){
    if(Topo==NULL) return true;
    else return false;
}
int Pilha_Tamanho(){
    return Pilha_Contador;
}
bool Pilha_Push(int valor){ //Empilhando
    TipoCelula *Nova_Cel=(TipoCelula*)malloc(sizeof(TipoCelula));
    if (Nova_Cel==NULL) exit(0);
    Nova_Cel->item=valor;
    Nova_Cel->prox=Topo;
    Topo=Nova_Cel;
    Pilha_Contador++;
    return true;
}
bool Pilha_Pop(int &valor){ //Desempilhar
    if (Pilha_Vazia()==true)return false;
    TipoCelula *Temp;
    valor=Topo->item;
    Temp=Topo; //'guardar' celula retirada
    temp->prox=NULL; //desvincular a celula retirada da pilha
    Topo=Topo->prox;
    free(Temp);
    Pilha_Contador--;
    return true;
}

void Pilha_get(int &valor){ //pegar valor do topo da pilha;
    if (Pilha_Vazia()) return false;
    valor=Topo->item;
    return true;
}
//destruir a pilha pra devolver a memoria alocada
bool Pilha_Destruida(){
    int Aux;
    TipoCelula *Temp;
    if (Pilha_Vazia()) return false;
    while (Topo!=NULL){
        Temp=Topo;
        Temp->prox=NULL;
        Topo=Topo->prox;
        free(Temp);
    }
    Pilha_Contador=0;
    return true;
}

int main(){
    int N;
    int* varetas[N];
    struct TipoCelula celula;

}

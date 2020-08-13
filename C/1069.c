//Exercicio 1069
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// solução ideal
struct Diamt	{	char diamante;
					struct Diamt *prox;
				};
typedef struct Diamt TDiamt;

struct descrPilha { TDiamt *topo;};
typedef struct descrPilha DPilha;

int mdasain()
{
	char linha[1010] = "";
	DPilha	descritor;
	TDiamt *aux, *aux2;
	int N = 0, Dqtd =0, c = 0, d=0;

	scanf("%d", &N);

	while(c < N)
	{
		scanf("%s", linha);

		descritor.topo = NULL;
		d = 0;
		Dqtd = 0;

		while(d < strlen(linha))
		{
			if(linha[d] == '<')
			{
				aux = (TDiamt *) malloc(sizeof(TDiamt));

				if(aux == NULL)
					break;

				aux->diamante = linha[d];
				aux->prox = descritor.topo;

				descritor.topo = aux;
			}

			else if(linha[d] == '>')
			{
				if(descritor.topo != NULL)
				{
					aux2 = descritor.topo;
					descritor.topo = aux2->prox;
					free(aux2);
					Dqtd++;
				}
			}
			d++;
		}
		printf("%d\n", Dqtd);
		c++;
	}
	return 0;
}

//Minha resolução//////
//precisa de conserto
int madasin(){
    int N,cont=0,diamante=-1;
    char terra[1001];
    scanf("%d",&N);
    while (N<0){
        scanf("%d",&N);
    }
    char *joia=(char*)malloc(sizeof(char)*1000);
    if (joia==NULL){
        exit(0);
    }
    for (int i=0;i<N;i++){
        scanf("%s",terra);
        for (int j=0;j<strlen(terra);j++){
            if (terra[j]=='<'||terra[j]=='>'){
                *(joia+cont)=terra[j];
                cont++;
            }
        }
        for (int j=0;j<1000;j++){
            if (*(joia+j)=='<'&&*(joia+j+1)=='>') diamante++;
            else if(*(joia+j+1)!='<'&&*(joia+j+1)!='>'){
                if (*(joia+j)=='>'&&*(joia+j-1)=='<') diamante++;
            }
        }
        printf("%d\n",diamante);
        free(joia);
    }
    return 0;
}

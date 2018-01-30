#include <stdio.h>
#include <stdlib.h>
typedef struct _JOGADOR{
    char nome[42];
    int pontos;
}JOGADOR;
void sort(JOGADOR *j, int tam);
int main(){
    JOGADOR j[5];
    int i;
    for(i= 0; i<5; i++){
        setbuf(stdin, NULL);
        fgets(j[i].nome, 42, stdin);
        setbuf(stdin, NULL);
        scanf("%d", &j[i].pontos);
        //puts(j[i].nome);
        //printf("%d\n", j[i].pontos);
    }
    sort(j, 5);
    for(i= 0; i<5; i++){
        printf("%s%d\n", j[i].nome, j[i].pontos);
    }
    }
void sort(JOGADOR *j, int tam){
    JOGADOR temp;
    int k;
    int i;
    for(i = 0; i < tam; i++){
        for(k = 0; k < tam; k++){
            if(j[i].pontos > j[k].pontos){
                temp = j[i];
                j[i] = j[k];
                j[k] = temp;
        }
        }
    }



}

#include <stdio.h>
#include <stdlib.h>
typedef struct _JOGADOR{
    char nome[42];
    int pontos;
}JOGADOR;
void sort(JOGADOR *j, int tam);
int main(){
    JOGADOR j[5];
    JOGADOR novo;
    int i;
    for(i= 0; i<5; i++){
        setbuf(stdin, NULL);
        printf("Digite o nome do jogador:  ");
        fgets(j[i].nome, 42, stdin);
        setbuf(stdin, NULL);
        printf("Digite sua pontuacao:  ");
        scanf("%d", &j[i].pontos);
        //puts(j[i].nome);
        //printf("%d\n", j[i].pontos);
    }
    printf("Digite o nome do novo jogador:  ");
    setbuf(stdin, NULL);
    fgets(novo.nome, 42, stdin);
    setbuf(stdin, NULL);
    printf("Digite sua pontuacao:  ");
    scanf("%d", &novo.pontos);
    if(novo.pontos > j[4].pontos){
        j[4] = novo;
    }
    else{
        printf("O novo jogador nao estara no ranking de recordistas\n");
    }
    setbuf(stdin, NULL);
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

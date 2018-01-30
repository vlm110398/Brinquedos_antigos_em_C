#include <stdio.h>
#include <stdlib.h>
int *ordenarvetor(int *p, int tam;);
int main (void) {
    int *vetor;
    int tam;
    int i;
    printf("Escreva o tamanho do vetor\n");
    scanf("%d", &tam);
    vetor = (int *) calloc(tam,sizeof(int));
    printf("Digite os numeros do vetor\n");
    for(i = 0; i < tam; i++){
        scanf("%d", (vetor+i));
    }
    printf("Os valores do vetor sao:\n");
    for(i = 0; i < tam; i++){
        printf("%d ", *(vetor+i));
    }
    putchar('\n');
    vetor = ordenarvetor(vetor, tam);
    printf("Os valores do vetor ordenados crescentemente sao:\n");
    for(i = 0; i < tam; i++){
        printf("%d ", *(vetor+i));
    }
}
int *ordenarvetor(int *p, int tam){
    int i;
    int j;
    int temp;
    for(i = 0; i<tam; i++){
        for(j = 0;j < tam; j++){
            if(*(p+i) < *(p+j)){
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
    return p;

}

#include <stdio.h>
#include <stdlib.h>
void lervet(int *v, int tam, int index);
void imprimir_contrario(int *v, int tam);
void lervet(int *v, int tam, int index){
    if(index == tam){
        return 0;
    }
    scanf("%d", &v[index]);
    lervet(v, tam, index+1);

}
void imprimir_contrario(int *v, int tam){
    printf("%d ", v[tam-1]);
    if(tam == 1){
        return 0;
    }
    imprimir_contrario(v, tam-1);


}
int main ( int argc , char * argv [])
{
    int *vet;
    int i;
    vet = (int *) calloc(10, sizeof(int));
    lervet(vet, 10, 0);

    imprimir_contrario(vet, 10);
    putchar('\n');
}

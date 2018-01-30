#include <stdio.h>

int main() {
    int M, N, aux, Soma;
    while(1){
        scanf("%d %d", &M, &N);
        if(M <= 0 || N <= 0)
            return 0;
        if(M<N){
             aux = M;
             M = N;
             N = aux;
        }
        for(Soma = 0;N<=M;N++){
            printf("%d ",N);
            Soma += N;
        }
        printf("Sum=%d\n", Soma);
    }
    return 0;
}

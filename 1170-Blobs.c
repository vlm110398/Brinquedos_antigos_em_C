#include <stdio.h>
int main() {
    int N, i, cont;
    double C;
    scanf("%d", &N);
    for(i = 0; i< N; i++){
        cont = 0;
        scanf("%lf", &C);
        while(C>1){
            C -= C/2;
            cont++;
        }
        printf("%d dias\n", cont);
    }
    return 0;
}

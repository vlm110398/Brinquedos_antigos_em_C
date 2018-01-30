#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int passo = 500000;
    float i;
    int *p;
    for(i = 10000;passo != 1; i+=passo ){
        p = (int *) malloc(i);
        if(!p){
            i-= passo;
            passo /=2;
        }
        free(p);

    }
    printf("%f\n", i/(1024*1024*1024));
    return 0;
}

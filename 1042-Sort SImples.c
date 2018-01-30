#include <stdio.h>

int main() {

    int n[3] = {0,0,0};
    int clone[3] = {0,0,0};
    int x, y;
    int aux;
    aux = 0;
    for(x = 0; x<3; x++){
        scanf("%d", &n[x]);
        clone[x] = n[x];
    }
    for(x = 0; x < 3;x++){
        for(y = 0; y < 3; y++){
           if(n[x] < n[y]){
            aux = n[y];
            n[y] = n[x];
            n[x] = aux;
           }
        }
    }
    printf("%d\n%d\n%d\n", n[0], n[1], n[2]);
    printf("\n");
    for(x = 0; x<3; x++){
        printf("%d\n", clone[x]);
    }
    return 0;
}


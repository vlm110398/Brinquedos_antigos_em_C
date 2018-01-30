#include <stdio.h>
#include <stdio.h>

int main() {
    int I, J;
    for (I=1, J=7; I<=9; I += 2){
        printf("I=%d J=%d\n", I, J);
        printf("I=%d J=%d\n", I, J-1);
        printf("I=%d J=%d\n", I, J-2);
    }
    return 0;
}

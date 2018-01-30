#include <stdio.h>
#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d", &X);
    if(X%2 == 0){
        X += 1;
        printf("%d\n", X);
    }
    else{
        printf("%d\n", X);
    }
    for(Y = 0; Y < 5; Y++){
        X += 2;
        printf("%d\n", X);
    }
    return 0;
}

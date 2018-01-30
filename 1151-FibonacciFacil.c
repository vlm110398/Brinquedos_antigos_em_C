#include <stdio.h>

int main() {
    int fibo[50] = {0,1};
    int x = 2, N = 0;
    scanf("%d", &N);
        for(x=1;x<=N;x++){
            fibo[x+1] = fibo[x] + fibo[x-1];
            printf("%d", fibo[x-1]);
            if(x<N)
               printf(" ");
            else
                printf("\n");
        }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int fat(int n);
int fat(int n){
    if(n == 1) return 1;
    return n*fat(n-1);
}
int main ( int argc , char * argv [])
{
    int n;
    scanf("%d", &n);
    printf("%d", fat(n));
}

#include <stdio.h>
#include <stdlib.h>
typedef struct _FRACAO{
    int numerador;
    int denominador;
}FRACAO;
void ler_fracao(FRACAO *a);
FRACAO soma(FRACAO a, FRACAO b);
FRACAO subtracao(FRACAO a, FRACAO b);
FRACAO multiplicacao(FRACAO a, FRACAO b);
FRACAO divisao(FRACAO a, FRACAO b);
int main(){
    FRACAO a, b;
    FRACAO total;
    ler_fracao(&a);
    ler_fracao(&b);
    total = soma(a,b);
    printf("%d/%d + %d/%d = %d/%d\n", a.numerador, a.denominador, b.numerador, b.denominador, total.numerador, total.denominador);
    total = subtracao(a,b);
    printf("%d/%d - %d/%d = %d/%d\n", a.numerador, a.denominador, b.numerador, b.denominador, total.numerador, total.denominador);
    total = multiplicacao(a,b);
    printf("%d/%d * %d/%d = %d/%d\n", a.numerador, a.denominador, b.numerador, b.denominador, total.numerador, total.denominador);
    total = divisao(a,b);
    printf("%d/%d / %d/%d = %d/%d\n", a.numerador, a.denominador, b.numerador, b.denominador, total.numerador, total.denominador);

}
void ler_fracao(FRACAO *a){
    printf("Digite o numerador\n");
    scanf("%d", &a->numerador);
    printf("Digite o denominador\n");
    scanf("%d", &a->denominador);
}
FRACAO soma(FRACAO a, FRACAO b){
    FRACAO total;
    total.denominador = a.denominador * b.denominador;
    total.numerador = a.denominador * b.numerador + a.numerador * b.denominador;
    return total;
}
FRACAO subtracao(FRACAO a, FRACAO b){
    FRACAO total;
    total.denominador = a.denominador * b.denominador;
    total.numerador = a.numerador * b.denominador - a.denominador * b.numerador ;
    return total;
}
FRACAO multiplicacao(FRACAO a, FRACAO b){
    FRACAO total;
    total.denominador = a.denominador * b.denominador;
    total.numerador = a.numerador * b.numerador;
    return total;
}
FRACAO divisao(FRACAO a, FRACAO b){
    FRACAO total;
    total.numerador = a.numerador * b.denominador;
    total.denominador = a.denominador * b.numerador;
    return total;
}

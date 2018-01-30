#include <stdio.h>
#include <math.h>
typedef struct _PONTO{
    float x;
    float y;
}PONTO;
typedef struct _CIRC{
    PONTO centro;
    float raio;
}CIRC;
float distancia(CIRC c1, PONTO p);
int main(){
    CIRC c1;
    PONTO p;
    printf("DIGITE O RAIO DA CIRCUNFERENCIA\n");
    scanf("%f", &c1.raio);
    printf("DIGITE AS COORDENADAS DO CENTRO DA CIRCUNFERENCIA\n");
    scanf("%f %f", &c1.centro.x, &c1.centro.y);
    printf("DIGITE AS COORDENADAS DO PONTO\n");
    scanf("%f %f", &p.x, &p.y);
    if(distancia(c1, p) <= c1.raio)
        printf("O PONTO ESTA CONTIDO NA CIRCUNFERENCIA");
    else
        printf("O PONTO NAO ESTA CONTIDO NA CIRCUNFERENCIA");
}
float distancia(CIRC c1, PONTO p){
    return sqrt(powf(c1.centro.x - p.x, 2)+ powf(c1.centro.y - p.y, 2));
}

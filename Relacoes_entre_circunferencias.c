#include <stdio.h>
#include <math.h>
typedef struct _PONTOS{
    float x, y;
}PONTOS;
typedef struct _CIRC{
    PONTOS p;
    float raio;
}CIRC;
typedef struct _RAIOS{
    float maior;
    float menor;
}RAIOS;
void relacao(CIRC c1, CIRC c2);
void maior_menor(float raio_1, float raio_2, RAIOS *r);
int main(){
    CIRC c1, c2;
    printf("Escreva o RAIO e as coordenadas X e Y da circunferencia respectivamente\n");
    scanf("%f %f %f", &c1.raio, &c1.p.x, &c1.p.y);
    printf("Escreva o RAIO e as coordenadas X e Y da circunferencia respectivamente\n");
    scanf("%f %f %f", &c2.raio, &c2.p.x, &c2.p.y);
    relacao(c1, c2);
}
void relacao(CIRC c1, CIRC c2){
    float dist;
    float raio_total;
    RAIOS r;
    raio_total = c1.raio + c2.raio;
    dist = sqrt(powf(c1.p.x - c2.p.x, 2) + powf(c1.p.y - c2.p.y, 2));
    maior_menor(c1.raio, c2.raio, &r);
    if(dist < r.maior){
        printf("Uma circunferencia eh interna a outra");
    }
    if(dist == 2*r.menor || r.maior + r.menor == dist){
        printf("As bordas das circunferencias se tagenciam");
    }
    if(dist > 2*r.menor && dist < r.maior + r.menor){
        printf("as bordas das circunferencias sao secantes");
    }
    if(dist > r.maior+r.menor){
        printf("As circunferencias sao externas uma da outra");
    }
}
void maior_menor(float raio_1, float raio_2, RAIOS *r){
    if(raio_1 >  raio_2){
        r->maior = raio_1;
        r->menor = raio_2;
    }
    else{
        r->maior = raio_2;
        r->menor = raio_1;
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct _COORDENADAS{
    float x, y;
}COORDENADAS;
float distancia(COORDENADAS p1, COORDENADAS p2);
int main ( int argc , char * argv [])
{
   COORDENADAS p1, p2;
   printf("DIGITE OS DOIS PONTOS X E Y RESPECTIVAMENTE\n");
   scanf("%f %f", &p1.x, &p1.y);
   printf("%f %f\n", p1.x, p1.y);
   scanf("%f %f", &p2.x, &p2.y);
   printf("%f %f\n", p2.x, p2.y);
   printf("%f\n", distancia(p1, p2));
}
float distancia(COORDENADAS p1, COORDENADAS p2){
    return sqrt(powf(p2.x - p1.x, 2) + powf(p2.y - p1.y, 2));
}


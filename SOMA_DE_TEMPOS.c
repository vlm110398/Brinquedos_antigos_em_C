#include <stdio.h>
#include <string.h>
typedef struct _TEMPO{
    int horas;
    int minutos;
    int segundos;
}TEMPO;
void organizar(TEMPO *t);
int main(){
    TEMPO t1, t2, t3;
    int t1temp, t2temp;
    t1temp = t2temp = 0;
    printf("DIGITE AS HORAS, MINUTOS E SEGUNDOS DE t1\n");
    scanf("%d %d %d", &t1.horas, &t1.minutos, &t1.segundos);
    printf("DIGITE AS HORAS, MINUTOS E SEGUNDOS DE t2\n");
    scanf("%d %d %d", &t2.horas, &t2.minutos, &t2.segundos);
    organizar(&t1);
    printf("O VALOR DE T1 EH %d:%d:%d\n", t1.horas, t1.minutos, t1.segundos);
    organizar(&t2);
    printf("O VALOR DE T2 EH %d:%d:%d\n", t2.horas, t2.minutos, t2.segundos);
    t3.horas = t1.horas + t2.horas;
    t3.minutos = t1.minutos + t2.minutos;
    t3.segundos = t1.segundos + t2.segundos;
    organizar(&t3);
    printf("O VALOR DE T1 + T2 EH %d:%d:%d\n", t3.horas, t3.minutos, t3.segundos);
}
void organizar(TEMPO *t){
    if(t->segundos >= 60){
        t->minutos += t->segundos/60;
        t->segundos = t->segundos%60;
    }
    if(t->minutos > 60){
        t->horas += t->minutos/60;
        t->minutos = t->minutos%60;
    }

}



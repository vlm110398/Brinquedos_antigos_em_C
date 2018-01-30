#include <stdio.h>
#include <string.h>
typedef struct _TEMPO{
    int horas;
    int minutos;
    int segundos;
}TEMPO;
int main(){
    TEMPO t1, t2;
    int t1temp, t2temp;
    t1temp = t2temp = 0;
    printf("DIGITE AS HORAS, MINUTOS E SEGUNDOS DE t1\n");
    scanf("%d %d %d", &t1.horas, &t1.minutos, &t1.segundos);
    printf("DIGITE AS HORAS, MINUTOS E SEGUNDOS DE t2\n");
    scanf("%d %d %d", &t2.horas, &t2.minutos, &t2.segundos);
    if(t1.horas == t2.horas && t1.minutos == t2.minutos && t1.segundos == t2.segundos){
        printf("Os dois sao iguais\n");
    }
    else{
        if(t1.horas > t2.horas){
            t1temp = 1;
        }
        else if(t1.horas < t2.horas){
            t2temp = 1;
        }
        else{
            if(t1.minutos > t2.minutos){
                t1temp = 1;
            }
            if(t1.minutos < t2.minutos){
                t2temp = 1;
            }
            else{
                if(t1.segundos > t2.segundos){
                    t1temp = 1;
                }
                else{
                    t2temp = 1;
                }
            }
        }
        if(t1temp == 1){
            puts("O t1 eh maior");
        }
        else{
            puts("O t2 eh maior");
        }
    }
}




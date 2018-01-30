#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAIUSCULA_I (string[i] <= 122 && string[i] >= 97) // esses defines servem para diminuir a sentenca gigante do if
#define MAIUSCULA_J (string[j] <= 122 && string[j] >= 97) // basicamente eles dao check se nos index i e j da string sao letras minusculas
#define MINUSCULA_I (string [i] <= 90 && string[i] >= 65) // ou maiusculas
#define MINUSCULA_J (string [j] <= 90 && string[j] >= 65)
int ehpalindromo(char *string, int i, int j);
int ehpalindromo(char *string, int i, int j){
    if(string[i] != string[j] && !((MINUSCULA_I || MAIUSCULA_I && MINUSCULA_J || MAIUSCULA_J) && ((string[j] - string[i] == 32) || string[i]- string[j] == 32)))
        return 0;
    if(i == j || j - i ==  1)
        return 1;
    ehpalindromo(string, i+1, j-1);
}
int main ( int argc , char * argv [])
{
    char *string;
    int n;
    int i;
    printf("Digite o tamanho maximo da string:");
    scanf("%d", &n);
    getchar();
    string = (char *) calloc(n+1, sizeof(char));
    if(!string) printf("Erro ao alocar memoria");
    while(1){
        gets(string);
        printf("%s", string);
        if(ehpalindromo(string, 0, strlen(string)-1) == 1)
            printf("\t\tEH PALINDROMO\n");
        else
            printf("\t\tNAO EH PALINDROMO\n");
    }
}

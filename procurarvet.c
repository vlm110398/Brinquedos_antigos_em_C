
#include <stdio.h>
int ondeEsta(char frase1[], char frase2[]);
int main(int argc, char **argv)
{
	char frase1[20], frase2[10];
	scanf("%s", &frase1);
	scanf("%s", &frase2);
	printf("%d", ondeEsta(frase1, frase2));
	return 0;
}
int ondeEsta(char frase1[], char frase2[]){
	int i = 0, j = 0, cont = 0;
	while(frase1[i] != '\0'){
		if(frase1[i] == frase2[j]){
			++j;
			++i;
			++cont;
		}
		else{
			j = 0;
			++i;
			cont = 0;
		}
		if(frase2[j+1] == '\0'){
			return i-cont;
		}
	}
	return -1;
	
}

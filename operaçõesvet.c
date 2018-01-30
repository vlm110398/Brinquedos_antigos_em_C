#include <stdio.h>
double maiorelementovet(double vetor[], int tam);
void mediavetor(double vetor[], int tam);
void lervet(double vetor[], int tam);
void ordenavetor(double vetor[], int tam);
void imprimevetor(double vetor[], int tam);
int main(int argc, char **argv)
{
	double vetor[5];
	maiorelementovet(vetor, 3);
	lervet(vetor, 3);
	printf("%lf\n", maiorelementovet(vetor,3));
	imprimevetor(vetor, 3);
	mediavetor(vetor, 3);
	ordenavetor(vetor, 3);
	imprimevetor(vetor,3);
	return 0;
	
}
double maiorelementovet(double vetor[], int tam){
	int i;
	double maior = 0;
	for(i = 0; i < tam; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	return maior;
}
void lervet(double vetor[], int tam){
	int i;
	for(i = 0; i < tam; i++){
		scanf("%lf", &vetor[i]);
	}
}
void imprimevetor(double vetor[], int tam){
	int i;
	for(i = 0; i < tam; i++){
		printf("%lf ", vetor[i]);
	}
	putchar('\n');
}
void mediavetor(double vetor[], int tam){
	double media = 0;
	int i;
	for(i = 0; i < tam; i++){
		media +=  vetor[i];
	}
	media /= (tam-1);
	printf("%lf\n", media);
	putchar('\n');
}
void ordenavetor(double vetor[], int tam){
	int aux = 0;
	int i, j;
	int k = tam - 1;
	for (i = 0; i < tam; i++){
		for(j = 0; j < k; j++){
			if(vetor[j] > vetor[j+1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}	
		}
		k--;
	}
}	
	


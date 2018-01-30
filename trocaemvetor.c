#include <stdio.h>

int main(int argc, char **argv)
{	
	int x[20];
	int y, w;
	int aux;
	for (y=0;y<20;y++){
		scanf("%d", &x[y]);

	}
	for (y=0, w = 19; y<10; y++, w--){
		aux = x[y];
		x[y] = x[w];
		x[w] = aux; 
	}
	for (y=0;y<20;y++){
		printf("N[%d] = %d\n",y, x[y]);
	}
	return 0;
}


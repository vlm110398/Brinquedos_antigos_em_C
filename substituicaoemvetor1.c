#include <stdio.h>

int main(int argc, char **argv)
{	
	int x[10];
	int y;
	for (y=0;y<10;y++){
		scanf("%d", &x[y]);
		if(x[y] <= 0){
			x[y] = 1;
			}
	}
	for (y=0;y<10;y++){
		printf("X[%d] = %d\n",y, x[y]);
	}
	
	return 0;
}


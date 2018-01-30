#include <stdio.h>

int main()
{
	float M[12][12];
	int j, i, L;
	char c;
	float sm = 0;
	scanf("%d", &L);
	getchar();
	c = getchar();
	for(i = 0; i < 12; i++){
		for(j = 0; j < 12; j++){
			scanf("%f", &M[i][j]);
	}
	}
	for(j = 0; j <12;j++){
		sm += M[L][j];
	}
	if(c == 'M'){
		sm /= 12;
	}
	printf("%.1f\n", sm);
	return 0;
}

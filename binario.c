#include <stdio.h>
void binario(int num);
int main(int argc, char **argv)
{	
	int num;
	scanf("%d", &num);
	binario(num);
	return 0;
}
void binario(int num){
	int bin[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int i;
	int j;
	if(num == 1) printf("%d", num);
	else{
		for(j = 0; num>2; j++){
			bin[j] = num % 2;
			num /= 2;
			
		}
		bin[j+1] = 1;
		for(i = j+1 ; i >= 0; i--){
			printf("%d", bin[i]);
		}
	}
}

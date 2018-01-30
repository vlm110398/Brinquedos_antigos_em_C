#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	int i,n,m;
	char s[100];
	int led, tamanho;
	scanf("%d", &m);
	for(n = 0; n< m; n++){
		scanf("%s",&s);
		tamanho = strlen(s);
		led = 0;
		for (i = 0; i < tamanho; i++){
			if(s[i] == '1'){
				led += 2;
			}
			else if(s[i] == '2'|| s[i] == '3' || s[i] == '5'){
				led += 5;
			}
			else if(s[i] == '4'){
				led += 4;
			}
			else if(s[i] == '6'|| s[i] == '9' || s[i] == '0'){
				led += 6;
			}
			else if(s[i] == '7'){
				led += 3;
			}
			else if(s[i] == '8'){
				led += 7;
			}
		}
			printf("%d leds\n", led);
	}
	
	return 0;
}


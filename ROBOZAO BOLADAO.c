#include <stdio.h>
#include <string.h>
#include <conio.h>
#define X 51
#define Y 26
void move(char t, char c[X][Y], int *x, int *y);
void preencher(char c[X][Y]);
void printar(char c[X][Y]);
void posicao(char c[X][Y], int *x, int *y);
int main(int argc, char **argv)
{
	int x, y;
	char c[X][Y];
	char t;
	do{
		printf("Escolha a posicao do robo\nDigite o primeiro numero sendo ele entre 0 e 50\n");
		scanf("%d", &x);
		printf("Digite o segundo numero sendo ele entre 0 e 25\n");
		scanf("%d", &y);
		system("cls");
		if((x< 0 || x>(X-1)) || y < 0 || y > (Y-1)){
			puts("Voce trolou digite novamente\n");
		}
	}while((x< 0 || x>(X-1)) || y < 0 || y > (Y-1)); 
	
	preencher(&c);
	posicao(&c, &x, &y);
	printar(&c);
	printf("Instrucoes: Aperte wasd sem capslock para mover o robo\n");
	while(1){
		t = getch();
		system("cls");
		putchar('\n');
		move(t, &c, &x, &y);
		preencher(&c);
		posicao(&c, &x, &y);
		printar(&c);
		
		
	}
	
	return 0;
}
void preencher(char c[X][Y]){
	int i, j;
	for(j = 0; j < Y; j++){
		for(i = 0; i < X; i++){
		c[i][j] = 219;	
		}
	}
}
void printar(char c[X][Y]){
	int i, j;
	for(j = 0; j < Y; j++){
		for(i = 0; i < X; i++){
			printf("%c" , c[i][j]);
		}
		putchar('\n');
		
	}
}
void posicao(char c[X][Y], int *x, int *y){
	c[*x][*y] = 'R';
}
void move(char t, char c[X][Y], int *x, int *y){
	switch(t){
		case 'w':
			if (*y == 0) puts("Voce nao pode se mover por aqui");
			else *y -= 1;
			break;
		case 'd':
			if (*x == X-1) puts("Voce nao pode se mover por aqui");
			else *x += 1;
			break;
		case 's':
			if (*y >= Y-1) puts("Voce nao pode se mover por aqui");
			else *y += 1;
			break;
		case 'a':
			if (*x == 0) puts("Voce nao pode se mover por aqui");
			else *x -= 1;
			break;
		
		
}	
	
}

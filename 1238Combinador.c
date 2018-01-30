#include <stdio.h>

int main()
{
	int n, m, i;
	char s1[50], s2[50];
	int c1, c2;
	scanf("%d", &m);
	for(n = 0; n < m; n++){ 
		s1[50] = 0;
		s2[50] = 0;
		c1 = 1;
		c2 = 1;
		scanf("%s %s", s1, s2);
		for(i = 0; i < 50; i++){
			if(s1[i] == '\0') c1 = 0;
			if(s2[i] == '\0') c2 = 0;
			if(c1 != 0){
				printf("%c", s1[i]);
			}
			if(c2 != 0){
				printf("%c", s2[i]);
			}
		}	
		printf("\n");
	}
	return 0;
}


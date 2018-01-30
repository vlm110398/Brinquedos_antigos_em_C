#include <stdio.h>
double pi(int termos);
int main(int argc, char **argv)
{
	printf("%lf", pi(100)); 
	return 0;
}
double pi(int termos){
	int x = 1;
	double seq = 1;
	int i = 3;
	for(x = 2;x <= termos; x++){
		if(x%2 == 0){
			seq -= (double)1/i;
 		}
		if(x%2 == 1){
			seq += (double)1/i;
		}
		i+= 2;
	}
	return seq;
}


#include <stdio.h>
#include <stdlib.h>
main(){
	double x = -3, deltax, n = 7996;
	double integral = 0;
	double intervalo = -3-1;
	deltax = -intervalo/n;
	for(n ; n > 0; n--){
		x += deltax;
		integral += deltax*x;
	} 
	printf("%lf %lf", integral, n);
}

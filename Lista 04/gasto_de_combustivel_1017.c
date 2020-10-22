#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){ //gasolina 1017 

	double tempo, velocidade, distancia, litros;
	
	scanf("%lf", &tempo);
	scanf("%lf", &velocidade);
	
	distancia = tempo * velocidade;
	litros = distancia / 12;
	
	printf("%.3lf\n", litros);
	
	return 0;
}
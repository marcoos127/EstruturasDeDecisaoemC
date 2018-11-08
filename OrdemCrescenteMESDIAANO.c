#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	int ano1,ano2,mes1,mes2,dia1,dia2;
	
	printf ("Digite o primeiro ano: \n");
	scanf ("%d", &ano1);
	
	printf ("Digite o segundo ano: \n");
	scanf ("%d", &ano2);
	
	printf ("Digite o primeiro mes: \n");
	scanf ("%d", &mes1);
	
	printf ("Digite o segundo mes: \n");
	scanf ("%d", &mes2);
	
	printf ("Digite o primeiro dia: \n");
	scanf ("%d", &dia1);
	
	printf ("Digite o segundo dia: \n");
	scanf ("%d", &dia2);
	
	
	if(ano1 > ano2) {
		printf ("\nOrdem crescente de anos: %d, %d", ano2,ano1);
	}
	else{
		if(ano2 > ano1){
			printf ("\nOrdem crescente de anos: %d, %d", ano1,ano2);
		}
	}
	
	if(mes1 > mes2) {
		printf ("\nOrdem crescente de mês: %d , %d", mes2,mes1);
	}
	else{
		if(mes2 > mes1){
			printf ("\nOrdem crescente de mês: %d , %d", mes1,mes2);
		}
	}
	
	if(dia1 > dia2){
		printf ("\nOrdem crescente de dias: %d , %d", dia2,dia1);
	}
	else{
		if(dia2 > dia1){
			printf ("\nOrdem crescente de dias: %d , %d", dia1,dia2);
		}
	}
	return 0;
}

#include<stdio.h>
#include<locale.h>

float soma(float s1, float s2){
	float resultado;
	resultado = s1+s2;
	return resultado;
}
main(){
	setlocale(LC_ALL,"portuguese");
	int n1,n2;
	float r;
	char operador;
	printf("CALCULADORA\nAjuda:\nSoma = '+'\nSubtra��o = '-'\nMultiplica��o = '*' \nDivis�o = '/'");
	printf("\n\nDigite o primeiro n�mero, a opera��o e logo depois o segundo n�mero ");
	scanf("%d %c %d", &n1, &operador, &n2);
    switch(operador){
		case '+':
			r = soma(n1,n2);
			printf("\n%.2f", r);
			break;
	}
}

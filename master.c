main(){
	setlocale(LC_ALL,"portuguese");
	int n1,n2;
	float r;
	char operador;
	printf("CALCULADORA\nAjuda:\nSoma = '+'\nSubtra��o = '-'\nMultiplica��o = '*' \nDivis�o = '/'");
	printf("\n\nDigite o primeiro n�mero, a opera��o e logo depois o segundo n�mero ");
	scanf("%d %c %d", &n1, &operador, &n2);
    switch(operador){

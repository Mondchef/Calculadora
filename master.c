main(){
	setlocale(LC_ALL,"portuguese");
	int n1,n2;
	float r;
	char operador;
	printf("CALCULADORA\nAjuda:\nSoma = '+'\nSubtração = '-'\nMultiplicação = '*' \nDivisão = '/'");
	printf("\n\nDigite o primeiro número, a operação e logo depois o segundo número ");
	scanf("%d %c %d", &n1, &operador, &n2);
    switch(operador){

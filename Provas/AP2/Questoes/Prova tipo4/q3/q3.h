void verifica_triangulo(){
	int soma = 0;
	if(a == b)soma++;
	if(a == c)soma++;
	if(b == c)soma++;
	
	if(soma == 3)printf("Triangulo equilatero\n");
	if(soma == 1)printf("Triangulo isosceles\n");
	if(soma == 0)printf("Triangulo escaleno\n");
}
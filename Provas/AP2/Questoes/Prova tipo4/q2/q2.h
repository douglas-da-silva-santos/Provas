Cliente cliente[3];

void ler_campos(){
	for(int i=0; i < 3; i++){
	    printf("Entre com o campo nome do registro %d:",i+1);
	    scanf("%s",cliente[i].nome);
	    printf("Entre com o campo CPF do registro %d:",i+1);
	    scanf("%s",cliente[i].CPF);
	    printf("Entre com o campo altura do registro %d:",i+1);
	    scanf("%f",&cliente[i].altura);
	    printf("Entre com o campo peso do registro %d:",i+1);
	    scanf("%f",&cliente[i].peso);
	    printf("\n\n");
	}
}

void mostrar(){
    for(int i=0; i < 3; i++){
	    printf("Nome:%s\n",cliente[i].nome);
	    printf("CPF:%s\n",cliente[i].CPF);
	    printf("Altura:%2f\n",cliente[i].altura);
	    printf("Peso:%2f\n\n",cliente[i].peso);
	}
}

void imc(int indice){
    printf("\nNome:%s\n",cliente[indice].nome);
    printf("Imc:%f\n\n",cliente[indice].peso/(cliente[indice].altura*cliente[indice].altura) );
}

void executar_instrucoes(){
    ler_campos();//le dados
    strcpy(cliente[2].nome, "Francisco Pereira");//substitue nome do registro 3(indice 2)
    mostrar();//mostra que nome foi alterado
    imc(0);
    imc(1);
    imc(2);
}
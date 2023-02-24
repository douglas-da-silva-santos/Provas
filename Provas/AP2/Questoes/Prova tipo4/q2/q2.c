#include <stdio.h>
#include <string.h>

typedef struct Cliente{
    char CPF[15+1];
    char nome[200];
    float altura;
    float peso;
}Cliente;

#include "q2.h"

int main(){
    executar_instrucoes();
}
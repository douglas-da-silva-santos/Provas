#include <stdio.h>
#include <string.h>
int main(){
    char str1[20];
    char str2[20];
    scanf("%s",str1);
    memcpy(str2,str1,20);//copia uma string (destino,fonte,n caracteres)
    printf("String 1:%s\n",str1);
    printf("String 2:%s\n",str2);
    return 0;
}
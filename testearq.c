#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arq;
char ss[20];
arq = fopen("testearq.txt","w");
if(arq == NULL){
printf("Erro na abertura do arquivo");
system("pause");
exit(1);
}
printf("Entre com a string a ser gravada no arquivo:");
//Grava a string, caractere a caractere
gets(ss);
fputc(ss, arq);
fclose(arq);
system("pause");
return 0;
    
}

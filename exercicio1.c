//escreva um algoritimo que leia dos numeros inteiros, realize sua soma, A soma dos numeros foi: %d 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    FILE *cliente;
    FILE *recibo;
    char *url_cliente[100] = "cliente.txt";
    char *url_recibo[100]  = "recibo.txt";
    fopen(url_cliente,"w");
    fopen(url_recibo,"w");
    
    int cod_cli = 0, fone = 0; 
    char nome[100], endereco[100];

    int nun_doc = 0, valor_doc, data_emisao = 0, data_vencimento = 0;
    printf("Qual o codigo do cliente?\n");
    scanf("%d", &cod_cliente);
    
    
    fclose(cliente);
    fclose(recibo);    
}
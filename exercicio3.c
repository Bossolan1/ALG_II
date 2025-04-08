#include<stdlib.h>
#include<stdio.h>


void escreve(char *a)
{   
    char *b=a;
    printf("%s\n",a);
    *a='O';
    a++;
    *a='K';
    a++;
    *a='\0';
    a=b;
}


int main()
{
    char palavra[100];
    printf("escreva uma palavra\n");
    scanf("%s", palavra);
    escreve(palavra);
    printf("%s\n",palavra);
    return 0;
}
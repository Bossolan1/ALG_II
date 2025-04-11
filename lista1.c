#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"biblioteca.h"


int main()
{
    int escolha = 1;
    do
    {
    menu_principal();
    printf("Escolha uma das opcoes\n");
    scanf("%d",&escolha);
    system("clear");
    switch(escolha)
    {
    case 0:
    system("clear");
    printf("Obrigado por usar o app\n");
    break;
    case 1:
    escreve_oi();    
    break;
    case 2:
    char palavra[100];
    printf("Me escreva algo\n");
    scanf("%s", palavra);
    escreve_texto(palavra);
    break;
    case 3:
    char palavra_exercicio_3[100];
    printf("escreva uma palavra\n");
    scanf("%s", palavra_exercicio_3);
    escreve_palavra_exercicio_3(palavra_exercicio_3);
    printf("%s\n",palavra_exercicio_3);
    break;
    case 4:
    float a = 0, b = 0 ,c = 0;
    printf("Me diga o valor de A\n");
    scanf("%f",&a);
    printf("Me diga o valor de B\n");
    scanf("%f",&b);
    printf("Me diga o valor de C\n");
    scanf("%f",&c);
    bhaskara(a, b, c);
    break;
    case 5:
    int segundos = 0;
    printf("Me diga qual é o tempo em segundos expresso na fábrica\n");
    scanf("%d", &segundos);
    converte_tempo(segundos);
    break;
    case 6:
    int ano = 0, meses = 0, dias = 0;
    printf("Me diga quantos anos voce tem\n");
    scanf("%d", &ano);
    printf("Quantos meses voce tem?\n");
    scanf("%d", &meses);
    printf("Me diga quantos dias voce tem\n");
    scanf("%d", &dias);
    em_dias(ano, meses, dias);
    break;
    case 7:
    int numero_exercicio_7 = 0;
    printf("Me diga um numero\n");
    scanf("%d", &numero_exercicio_7);
    perfeito(numero_exercicio_7);
    break;
    case 8:
    int idade = 0, categoria = 0;
    printf("Me diga a sua idade, nadador?\n");
    scanf("%d", &idade);
    categoria = define_categoria(idade);
    tabela();
    printf("Sua categoria eh = %d\n", categoria);   
    break;
    case 9:
    int num = 0;
    printf("Me diga um valor\n");
    scanf("%d", &num);
    if(positivo_ou_negativo(num) == 1)
    {
        printf("Negativo\n");
    }
    if(positivo_ou_negativo(num) == 0)
    {
        printf("Positivo\n");
    }
    if(positivo_ou_negativo(num) == 2)
    {
        printf("0 nao eh nada\n");
    }
    break;
    case 10:
    int n = 0;
    printf("Me diga um numero\n");
    scanf("%d", &n);
    if(par_ou_impar(n) == 0)
    printf("Ele é Par\n");
    else
    printf("Ele é impar\n");
    break;
    case 11:
    float media_exercicio_11 = 0;
    char conceito = 'D';
    printf("Qual foi a sua média final?\n");
    scanf("%f",&media_exercicio_11);
    conceito = calc_conceito(media_exercicio_11);
    printf("Seu conceito é %c\n", conceito);
    if(conceito == 'R')
    printf("De retardado mental s2\n");
    break;
    case 12:
    int valores[3];
    printf("Me diga três valores, para isso basta escrevelo, precionar enter e repetir esse processo\n");
    scanf("%d %d %d", &valores[0], &valores[1], &valores[2]);
    ordena_vetor(valores);
    printf("Esses valores em ordem crescente:\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", valores[i]);
    }
    break;
    case 13:
    int x = 0, y = 0, z = 0;
    printf("Me diga o lado A\n");
    scanf("%d", &x);
    printf("Me diga o lado B\n");
    scanf("%d", &y);
    printf("me diga o lado C\n");
    scanf("%d", &z);
    tipo_triangulo(x,y,z);
    break;
    case 14:
    float numero_exercicio_14 = 0;
    printf("me diga um numero de valores a serem somados a media\n");
    scanf("%f", &numero_exercicio_14);
    numero_exercicio_14 = media(numero_exercicio_14);
    printf("a media eh de %.2f\n", numero_exercicio_14);
    break;
    case 15:
    int numero_exercicio_15 = 0, expoente = 0;
    printf("me fale um valor para ser elevadoz\n");
    scanf("%d", &numero_exercicio_15);
    printf("Me fale um expoente para ele\n");
    scanf("%d", &expoente);
    numero_exercicio_15 = potencia(numero_exercicio_15 , expoente);
    printf("A sua potencia eh de: %d\n",numero_exercicio_15);
    break;
    default:
    printf("opcao invalida\n");
    break;
    }
    }while(escolha != 0);
}
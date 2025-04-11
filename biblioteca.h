//0
void menu_principal()
{
    printf("--------------------------------------------------------------------\n");
    printf("|Digite o numero do exercicio para prosseguir ou 0 para sair do app|\n");
    printf("--------------------------------------------------------------------\n");
}
//1
void escreve_oi()
{
    printf("oi s2\n");
}
//2
void escreve_texto(char a[100])
{
    printf("%s s2\n", a);
}
//3
void escreve_palavra_exercicio_3(char *a)
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
//4
void bhaskara(float a, float b, float c)
{
    float delta = 0, x1, x2;
    delta = sqrt((b * b) - (4 * a * c));
    if(delta >= 0)
    {
        x1 = (((-b) + delta) / 2 * a);
        printf("x1 = %f\n",x1);
        x2 = (((-b) - delta) / 2 * a);
        printf("x2 = %f\n",x2);
        printf("Se saiu um valor satânico provavelmente a raiz do delta é encapetada e eu nao vou arrumar ela s2\n");
    }
    else
    {
        printf("delta invalido, nao existem raizes (pois ele é negativo)");
    }
}
//5
void converte_tempo(int tempo)
{
    printf("Em horas   : %.2f\n", (((float)tempo / 60) / 60));
    printf("Em minutos : %.2f\n", (float)tempo / 60);
    printf("Em segundos: %d\n", tempo);
}

//6
void em_dias(int a, int m, int d)
{
    printf("Sua idade expressa em? dias eh: %.0f\n",(((float)a * 365) + ((float)m * 30,4167) + (float)d));
}


//7
void perfeito(int num)
{
    int cnt = 0, aux = 0, tot_soma = 0;
    for(int i = num - 1; i > 0; i--)
    {
        if(num % i == 0)
        tot_soma += i;
    }
    if(tot_soma == num)
    {
        printf("%d eh um numero perfeito\n");
    }
    else
    {
        printf("%d nao eh um numero perfeito\n");
    }
}


//8
int define_categoria(int idade)
{
    if(idade <= 4)
    return 0;
    if(idade >= 5 && idade <= 7)
    return 1;
    if(idade >= 8 && idade <= 10)
    return 2;
    if(idade >= 11 && idade <= 13)
    return 3;
    if(idade >= 14 && idade <= 17)
    return 4;
    if(idade >= 18)
    return 5;
}

void tabela()
{
    system("clear");
    printf("     Tabela      categoria  \n");
    printf("|------------------------------|\n");
    printf("|    Idade    |  Categoria     |\n");
    printf("|  5    a   7 | infaltil A[1]  |\n");
    printf("|  8    a  10 | infaltil B[2]  |\n");
    printf("|  11   a  13 | juvenill A[3]  |\n");
    printf("|  14   a  17 | juvenill B[4]  |\n");
    printf("|  18   a  xx | Adulto    [5]  |\n");
    printf("|------------------------------|\n");
}
//9
int positivo_ou_negativo(int a)
{
    if(a > 0)
    {
    return 0;
    }
    if(a < 0)
    {
    return 1;
    }
    if(a == 0);
    {
    return 2;
    }
}

//10
int par_ou_impar(int a)
{
    if(a % 2 == 0)
    return 0;
    else
    return 1;
}
//11
char calc_conceito(float nota)
{
    if(nota <= 4.9)
    return 'D';
    if(nota >= 5 && nota <= 6.9)
    return 'C';
    if(nota >= 7 && nota <= 8.9)
    return 'B';
    if(nota >= 9 && nota <= 10)
    return 'A';
    if(nota > 10)
    return 'R';
}

//12
void ordena_vetor(int *var)
{
    int aux = 0;
    //*var = valor var = posicao
    for(int i = 0; i < 3; i++)
    {
        for(int j = i + 1; j < 3; j++)
        {
            if(*(var + i) > *(var + j))
            {
                aux = *(var + i);
                *(var + i) = *(var + j);
                *(var + j) = aux;
            }
        }
    }
}


//13
void tipo_triangulo(int a, int b, int c)
{
    if((abs(b-c) < a && b + c > a) && (abs(a-c) < b && a + c > b) && (abs(a-b) < c && a + b > c))
    {
        printf("Triangulo existente do tipo: ");
        if(a == b && a == c)
        {
            printf("Equilatero\n");
        }
        if(a != b && a != c)
        {
            printf("Escaleno\n");
        }
        if((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
        {
            printf("Isoceles\n");
        }
    }
    else
    {
        printf("Triangulo impossivel\n");
    }
}

//14
float media(int n)
{
    int valores[n], media = 0;
    for(int i = 0; i < n; i++)
    {
        printf("Me diga o °%%d valor", i + 1);
        scanf("%d", &valores[i]);
        media += valores[i];
    }
    media /= n;
    return (media);
}
//15
int potencia(int n, int exp)
{
    int aux = n;
    for(int i = exp; i > 1; i--)
    {
        aux *= n ;
    }
    return aux;
}
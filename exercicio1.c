#include<stdio.h>

int main()
{
    int  a = 5;
    int *p = &a;
    printf("*pa -> %d\n", *p);
    printf("(*pa)++ ->%d\n", (*p)+1);
    printf("*(p++) -> %d\n", *(p+1));
    printf("A diferença é que o primeiro é o valor de a\n O segundo incrementa o valor na posição de memõria de a\n E o terceiro passa para a proxima posição de memória");
}
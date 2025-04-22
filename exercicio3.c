#include<stdio.h>

int main()
{
int a = 1, b = 2 ,c = 3 ,d = 4 ,e = 5;
int *p[5] = {&a,&b,&c,&d,&e}; 
    for(int i =0; i < 5; i++)
    {
        printf("p[i] = %d\n &p[i] -> %p\n", *p[i], p[i]);
    } 
return 0;
}
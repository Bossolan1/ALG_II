#include<stdio.h>

int main()
{
    char string[16] = "Manteiga exotica";
    char *p_string = string;
    printf("Escrevendo a string: %s\n", string);
    printf("Escrevendo a string com ponteiro: ");
    for(int i = 0; *(p_string + i) != '\0'; i++)
    {
        printf("%c", *(p_string + i));
    }
    printf("\n");
    return 0;
}
#include "libft.h"
#include<ctype.h>
#include<stdio.h>

int main()
{
    printf("isalpha test\n");
    int i;

    i = 0;
    while (i < 128 && ft_isalpha(i) == isalpha(i))
        i++;
    i == 128 ? printf ("OK") : printf ("Error");
}
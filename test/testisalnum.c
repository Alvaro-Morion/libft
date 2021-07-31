#include "libft.h"
#include<ctype.h>
#include<stdio.h>

int main()
{
    printf("isalnum test\n");
    int i;

    i = 0;
    while (i < 128 && ft_isalnum(i) == isalnum(i))
        i++;
    i == 128 ? printf ("OK") : printf ("Error");
}
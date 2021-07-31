#include "libft.h"
#include<ctype.h>
#include<stdio.h>

int main()
{
    printf("isdigit test\n");
    int i;

    i = 0;
    while (i < 128 && ft_isdigit(i) == isdigit(i))
        i++;
    i == 128 ? printf ("OK") : printf ("Error: %d", i);
}
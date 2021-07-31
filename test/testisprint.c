#include "libft.h"
#include<ctype.h>
#include<stdio.h>

int main()
{
    printf("isprint test\n");
    int i;

    i = 0;
    while (i < 128 && ft_isprint(i) == isprint(i))
        i++;
    i == 128 ? printf ("OK") : printf ("Error: %d", i);
}
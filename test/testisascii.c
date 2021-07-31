#include "libft.h"
#include<ctype.h>
#include<stdio.h>

int main()
{
    printf("isascii test\n");
    int i;

    i = 0;
    while (i < 200 && ft_isascii(i) == isascii(i))
        i++;
    i == 200 ? printf ("OK") : printf ("Error");
}
#include "libft.h"
#include <stdio.h>

int main()
{
    char str[10] = "";
    char *test;
    
    printf("\n calloc test \n");
    test = ft_calloc(2,5);
    !ft_memcmp(str, test, 10) ? printf("OK") : printf("Error");
}
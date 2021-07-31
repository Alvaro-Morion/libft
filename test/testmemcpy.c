#include "libft.h"
#include <string.h>
#include <stdio.h>

int main ()
{
    const char *src;
    char dest[1000] = "";
    char test[1000] = "";
    int n;

    src = "Hola Mundo";
    printf("memcpy test");
    n = 5;
    ft_memcpy(dest, src, n);
    memcpy(test, src, n);
    memcmp(dest, test, n) == 0 ? printf("OK") : printf ("Error");
    n = 0;
    ft_memcpy(dest, src, n);
    memcpy(test, src, n);
    memcmp(dest, test, n) == 0 ? printf("OK") : printf ("Error");
    n = 100;
    ft_memcpy(dest, src, n);
    memcpy(test, src, n);
    memcmp(dest, test, n) == 0 ? printf("OK") : printf ("Error");
}
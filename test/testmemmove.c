#include "libft.h"
#include <string.h>
#include <stdio.h>

// no funciona este
int main ()
{
    const char src[11] = "Hola mundo";
    char *dest;
    char *test;
    int n;
    printf("memcpy test");
    dest =(char *)src - 1;
    test =(char *)src - 1;
    n = 5;
    ft_memmove(dest, src, n);
    memmove(test, src, n);
    memcmp(dest, test, n) == 0 ? printf("OK") : printf ("Error");
    n = 0;
    ft_memcpy(dest, src, n);
    memmove(test, src, n);
    memcmp(dest, test, n) == 0 ? printf("OK") : printf ("Error");
    n = 5;
    dest =(char *)src + 1;
    test =(char *)src + 1;
    ft_memcpy(dest, src, n);
    memmove(test, src, n);
    memcmp(dest, test, n) == 0 ? printf("OK") : printf ("Error");
}
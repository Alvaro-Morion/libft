#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
    const char s1[11] = "Hola Mundo";
    const char s2[11] = "Hola mundo";
    printf("memcmp test\n");
    ft_memcmp(s1, s1, 10) == 0 ? printf("OK") :printf("Error");
    ft_memcmp(s1, s2, 5) == 0 ? printf("OK") : printf("Error");
    ft_memcmp(s1, s2, 6) < 0 ? printf("OK") : printf("Error");
    ft_memcmp(s2, s1, 6) > 0 ? printf("OK") : printf("Error");
    ft_memcmp(s1, s2, 0) == 0 ? printf("OK") : printf("Error");
}
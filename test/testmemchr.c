#include "libft.h"
#include <string.h>
#include <stdio.h>
int main()
{
    const char s[11] = "Hola Mundo";
    
    printf("memchr test\n");
    memchr(s, 'o' , 10) == ft_memchr(s, 'o', 10) ? printf("OK") : printf ("Error");
    memchr(s, 'x' , 10) == ft_memchr(s, 'x', 10) ? printf("OK") : printf ("Error");
    memchr(s, 'M' , 3) == ft_memchr(s, 'M', 3) ? printf("OK") : printf ("Error");
    memchr(s, 'o' , 0) == ft_memchr(s, 'o', 0) ? printf("OK") : printf ("Error");
}
#include "libft.h"
#include <stdio.h>

int main ()
{
    printf("atoi test\n");
    ft_atoi("    +123a1") == atoi("    +123a1") ? printf("OK"): printf("ERROR");
    ft_atoi("    -123a1") == atoi("    -123a1") ? printf("OK"): printf("ERROR");
    ft_atoi("    + 123a1") == atoi("    + 123a1") ? printf("OK"): printf("ERROR");
    ft_atoi("  a  +123a") == atoi("  a  +123a") ? printf("OK"): printf("ERROR");
}

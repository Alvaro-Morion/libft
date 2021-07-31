#include "libft.h"
#include <stdio.h>


int main ()
{
    int i;
    char *test;

    printf("itoa test\n");
    i = 0;
    test = "12345";
    while (test[i] && ft_itoa(12345)[i] == test[i])
        i++;
    (test[i] == '\0' && ft_itoa(12345)[i] == 0) ? printf("OK") : printf("Error");
    i = 0;
    test = "-12345";
    while (test[i] && ft_itoa(-12345)[i] == test[i])
        i++;
    (test[i] == '\0' && ft_itoa(-12345)[i] == '\0') ? printf("OK") : printf("Error");
    i = 0;
    test = "0";
    while (test[i] && ft_itoa(0)[i] == test[i])
        i++;
    (test[i] == '\0' && ft_itoa(0)[i] == '\0') ? printf("OK") : printf("Error");
}
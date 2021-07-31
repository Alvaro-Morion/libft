#include "libft.h"
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char s1[11] = "0123456789";
    char s2[11] = "abcdefghij";

    printf("\n bzero test \n");
    bzero(s1, 4);
    ft_bzero(s2, 4);
    i = 0;
    while(s1[i] == s2[i])
        i++;
    i == 4 ? printf("OK") :printf("Error");
}
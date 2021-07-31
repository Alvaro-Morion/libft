/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:34:29 by amorion-          #+#    #+#             */
/*   Updated: 2021/07/31 17:50:30 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(int n)
{
	int	len;
	int	num;

	len = 0;
	num = n;
	if (n < 0)
		len = 1;
	while (num / 10)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_getlen(n);
	str = malloc(sizeof(char) * (len + 2));
	if (!str)
		return (NULL);
	str[len + 1] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	while (len >= 0 && n != 0)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len --;
	}
	return (str);
}

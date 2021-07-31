/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtirm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 09:58:58 by amorion-          #+#    #+#             */
/*   Updated: 2021/07/31 10:06:52 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static int	ft_isinset(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set [i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_strlen_mod(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	int		n;
	char	*str;

	size = ft_strlen_mod(s1);
	i = 0;
	while (ft_isinset(set, s1[size - 1]))
		size--;
	while (ft_isinset(set, s1[i]))
	{
		size--;
		i++;
	}
	str = malloc(sizeof(char) * (size + 1));
	n = 0;
	while (n < size)
	{
		str[n] = s1[i + n];
		n++;
	}
	str[n] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:41:41 by amorion-          #+#    #+#             */
/*   Updated: 2021/07/30 19:42:46 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*strdup(const char *s)
{
	int		size;
	int		i;
	char	*dest;

	size = 0;
	while (s[size])
		size++;
	dest = malloc(sizeof(s) * size);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}

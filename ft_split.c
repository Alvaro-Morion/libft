/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:17:01 by amorion-          #+#    #+#             */
/*   Updated: 2021/07/30 19:38:22 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static int	ft_nword(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (s[i])
	{
		if (s[i] == c)
			n++;
		i++;
	}
	return (n);
}

static int	ft_wrdlen(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	ft_splitwrd(char **tab, char *s2, char const *s, char c)
{
	int	i;
	int	j;
	int	wlen;

	i = 0;
	j = 0;
	while (s2[j] && i < ft_nword(s, c))
	{
		if (s2[j] != c)
		{
			tab[i] = malloc(sizeof (char) * (ft_wrdlen(&s2[j], c)));
			wlen = 0;
			while (s2[j] && s2[j] != c)
			{
				tab[i][wlen] = s2[j];
				wlen++;
				j++;
			}
			i++;
		}
		j++;
	}
	tab[i] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*s2;

	s2 = (char *)s;
	tab = malloc(sizeof (char *) * (ft_nword(s, c) + 1));
	if (!tab)
		return (0);
	ft_splitwrd(tab, s2, s, c);
	return (tab);
}

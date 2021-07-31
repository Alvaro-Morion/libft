/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fft_isprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:33:05 by amorion-          #+#    #+#             */
/*   Updated: 2021/07/28 20:12:33 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_dprint(int c)
{
	if ((c >= ' ' && c <= '/') || (c >= ':' && c <= '@')
		|| (c >= '[' && c <= '`') || (c >= '{' && c <= 126))
		return (1);
	return (0);
}

int	ft_isprint(int c)
{
	if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a')
		|| (c <= '9' && c >= '0') || ft_dprint(c))
		return (1);
	return (0);
}

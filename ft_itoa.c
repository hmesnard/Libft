/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesnard <hmesnard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:04:44 by hmesnard          #+#    #+#             */
/*   Updated: 2021/01/06 18:04:47 by hmesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nblen(unsigned int n)
{
	if (n < 10)
		return (1);
	return (1 + nblen(n / 10));
}

char		*ft_itoa(int n)
{
	char			*res;
	int				len;
	unsigned int	posn;

	posn = (n < 0) ? -n : n;
	len = nblen(posn);
	if (n < 0)
		len++;
	if (!(res = malloc((len + 1) * sizeof(char))))
		return (NULL);
	res[len] = '\0';
	while (--len >= 0)
	{
		res[len] = posn % 10 + 48;
		posn /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

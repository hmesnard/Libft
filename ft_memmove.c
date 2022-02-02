/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesnard <hmesnard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:06:27 by hmesnard          #+#    #+#             */
/*   Updated: 2021/01/06 18:06:28 by hmesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if ((dest || src) && (dest != src))
	{
		if (src < dest)
			while (n--)
				*((char*)dest + n) = *((char*)src + n);
		else
			while (i < n)
			{
				*((char*)dest + i) = *((char*)src + i);
				i++;
			}
	}
	return (dest);
}

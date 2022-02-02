/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesnard <hmesnard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:06:01 by hmesnard          #+#    #+#             */
/*   Updated: 2021/01/06 18:06:02 by hmesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	if (dest || src)
		while (i < n)
		{
			*((char*)dest + i) = *((char*)src + i);
			if (*((char*)src + i) == (char)c)
				return (dest + i + 1);
			i++;
		}
	return (NULL);
}

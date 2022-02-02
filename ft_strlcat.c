/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesnard <hmesnard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:09:16 by hmesnard          #+#    #+#             */
/*   Updated: 2021/01/06 18:09:18 by hmesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dstlen;
	unsigned int	i;

	dstlen = ft_strlen(dst);
	if (size < dstlen)
		return (size + ft_strlen(src));
	i = 0;
	if (size - dstlen > 0)
		while (src[i] && i < size - 1 - dstlen)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
	dst[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}

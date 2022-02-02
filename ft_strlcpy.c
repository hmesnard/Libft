/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesnard <hmesnard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:09:23 by hmesnard          #+#    #+#             */
/*   Updated: 2021/01/06 18:09:24 by hmesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	if (!src)
		return (0);
	i = 0;
	if (size > 0)
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
	if (size > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

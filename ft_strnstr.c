/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesnard <hmesnard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:10:40 by hmesnard          #+#    #+#             */
/*   Updated: 2021/01/06 18:10:41 by hmesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (!little[0])
		return ((char*)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = i;
			while (big[j] == little[j - i] && j < len)
			{
				if (little[j - i + 1] == '\0')
					return ((char*)big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

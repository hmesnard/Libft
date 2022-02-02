/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesnard <hmesnard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:09:09 by hmesnard          #+#    #+#             */
/*   Updated: 2021/01/06 18:09:10 by hmesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		lens1;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	if (!(res = malloc((lens1 + ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	i = -1;
	while (s2[++i])
		res[lens1 + i] = s2[i];
	res[lens1 + i] = '\0';
	return (res);
}

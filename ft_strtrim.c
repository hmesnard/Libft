/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesnard <hmesnard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:11:01 by hmesnard          #+#    #+#             */
/*   Updated: 2021/01/06 18:11:02 by hmesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const *set, char c)
{
	int		i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	i = -1;
	start = -1;
	while (s1[++i] && start == -1)
		if (!is_in_set(set, s1[i]))
			start = i;
	i = ft_strlen(s1);
	end = -2;
	if (start != -1)
		while (s1[--i] && end == -2)
			if (!is_in_set(set, s1[i]))
				end = i;
	if (!(res = malloc((end - start + 2) * sizeof(char))))
		return (NULL);
	i = -1;
	while (start + ++i <= end)
		res[i] = s1[start + i];
	res[i] = '\0';
	return (res);
}

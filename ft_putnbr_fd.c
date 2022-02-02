/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesnard <hmesnard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:06:54 by hmesnard          #+#    #+#             */
/*   Updated: 2021/01/06 18:06:55 by hmesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	posn;

	posn = (n < 0) ? -n : n;
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (posn >= 10)
		ft_putnbr_fd(posn / 10, fd);
	ft_putchar_fd(posn % 10 + 48, fd);
}

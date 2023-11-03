/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 00:31:58 by takuya            #+#    #+#             */
/*   Updated: 2023/10/02 17:40:22 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	saiki(int n, int fd)
{
	char	c;

	if (n != 0)
		saiki(n / 10, fd);
	if (n != 0)
	{
		c = get_abs(n % 10) + '0';
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
		write(fd, "-", 1);
	saiki(n, fd);
}

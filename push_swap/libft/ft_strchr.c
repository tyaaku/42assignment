/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:31:59 by taokada           #+#    #+#             */
/*   Updated: 2023/10/03 15:55:10 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned int	c_un;

	i = 0;
	c_un = (unsigned int)c;
	if (c_un > 255)
		c_un %= 256;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c_un)
			return ((char *)&s[i]);
		i++;
	}
	if (c_un == '\0')
		return ((char *)&s[i]);
	return (0);
}

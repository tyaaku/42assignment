/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:50:40 by taokada           #+#    #+#             */
/*   Updated: 2023/10/03 15:55:53 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int				s_len;
	unsigned int	c_un;

	s_len = 0;
	c_un = (unsigned int)c;
	if (c_un > 255)
		c_un %= 256;
	while (s[s_len] != '\0')
		s_len++;
	while (s_len >= 0 && s[s_len] != (unsigned char)c_un)
		s_len--;
	if (s_len >= 0)
		return ((char *)&s[s_len]);
	else
		return (0);
}

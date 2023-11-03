/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_ps.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:18:53 by taokada           #+#    #+#             */
/*   Updated: 2023/10/22 15:05:33 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin_ps(char *s1, char *s2)
{
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;
	char	*dest;

	if (s1 == NULL)
		s1 = (char *)calloc(1, sizeof(char));
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i < s1_len + s2_len)
	{
		if (i < s1_len)
			dest[i] = s1[i];
		else
			dest[i] = s2[i - s1_len];
		i++;
	}
	dest[i] = '\0';
	free(s1);
	return (dest);
}

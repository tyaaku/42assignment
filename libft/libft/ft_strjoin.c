/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:01:18 by takuya            #+#    #+#             */
/*   Updated: 2023/10/11 20:06:26 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;
	char	*dest;

	if (s1 == NULL || s2 == NULL)
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
	return (dest);
}

// #include<stdio.h>
// int main()
// {
//     char s1[] = "have a ";
//     char s2[] = "nice day";
//     char *result = ft_strjoin(s1,s2);
//     printf("result:%s\n",result);
//     free(result);
//     return(0);
// }
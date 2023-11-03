/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:09:02 by taokada           #+#    #+#             */
/*   Updated: 2023/10/03 15:48:44 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char		*dest_c;
	const char	*src_c;
	size_t		i;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_c = dest;
	src_c = src;
	i = 0;
	while (i < size)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	return ((void *)dest_c);
}

// #include<stdio.h>
// #include<string.h>
// int main(){
// 	char s1[] = "ABCDEFG";
// 	char s2[] = "oxoxoxo";
// 	char s3[] = "ABCDEFG";
// 	char s4[] = "oxoxoxo";
// 	for(size_t i = 0;i<8;i++)
// 	{
// 		printf("%lu)mine:%s\n",i,(char *)ft_memcpy(s1,s2,i));
// 		printf("%lu)real:%s\n",i,(char *)memcpy(s3,s4,i));
// 	}
// }
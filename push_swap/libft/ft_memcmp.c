/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:08:51 by taokada           #+#    #+#             */
/*   Updated: 2023/10/03 15:47:51 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

int	ft_memcmp(const void *buf, const void *buf2, size_t n)
{
	const char	*buf_c;
	const char	*buf2_c;
	size_t		i;

	buf_c = buf;
	buf2_c = buf2;
	i = 0;
	if (n == 0)
		return (0);
	while (buf_c[i] == buf2_c[i] && i < n - 1)
		i ++;
	return ((unsigned char)buf_c[i] - (unsigned char)buf2_c[i]);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
// 	char buf[] = "ABCD5EFGH";
// 	char buf2[] = "ABC123456";
//     for(size_t i = 0;i < 10;i++){
//         printf("%zu\n",i);
// 	if(memcmp(buf,buf2,i)==0)
// 		printf("先頭から%zuバイトは一致しています。\n",i);
// 	else
// 		puts("一致していません。");
// 	if(ft_memcmp(buf,buf2,i)==0)
// 		printf("先頭から%zuバイトは一致しています。\n",i);
// 	else
// 		puts("一致していません。");
//     }
// 	return 0;
// }
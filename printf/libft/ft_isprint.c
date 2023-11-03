/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:45:18 by taokada           #+#    #+#             */
/*   Updated: 2023/09/19 21:48:44 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include<stdio.h>
// int main(){
// 	int a = '0';
// 	int b = 'a';
// 	int c = ' ';
// 	int d = '\n';
// 	printf("%d\n",ft_isprint(a));
// 	printf("%d\n",ft_isprint(b));
// 	printf("%d\n",ft_isprint(c));
// 	printf("%d\n",ft_isprint(d));
// }
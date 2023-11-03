/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:30:24 by taokada           #+#    #+#             */
/*   Updated: 2023/09/19 21:34:22 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

// #include<stdio.h>
// int main(){
// 	int a = '0';
// 	int b = 'a';
// 	int c = 'A';
// 	int d = ')';
// 	printf("%d\n",ft_isalnum(a));
// 	printf("%d\n",ft_isalnum(b));
// 	printf("%d\n",ft_isalnum(c));
// 	printf("%d\n",ft_isalnum(d));
// }
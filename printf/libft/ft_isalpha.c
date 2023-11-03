/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:18:09 by taokada           #+#    #+#             */
/*   Updated: 2023/09/21 17:59:38 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
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
// 	printf("%d\n",ft_isalpha(a));
// 	printf("%d\n",ft_isalpha(b));
// 	printf("%d\n",ft_isalpha(c));
// 	printf("%d\n",ft_isalpha(d));
// }
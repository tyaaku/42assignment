/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taokada <taokada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 01:09:47 by taokada           #+#    #+#             */
/*   Updated: 2023/10/13 17:40:00 by taokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *src, ...);
int		is_ope_set(char c);
int		is_cspdi(char c);
int		is_uxper(char c);
int		use_operater_cspdi(const char *src, va_list args, int *add);
int		use_operater_ux(const char *src, va_list args, int *add);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putnbr_un(unsigned int n);
int		ft_putnbr_large_base(unsigned int i);
int		ft_putnbr_small_base(unsigned int i);
int		ft_putpointer(void *ptr);
char	*ft_itoa_base_un(unsigned long long i, char *base);
void	*ft_calloc(size_t n, size_t size);
char	*ft_itoa(int n);
size_t	ft_strlen(char *dest);

#endif

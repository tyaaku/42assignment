/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takuya <takuya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:22:57 by takuya            #+#    #+#             */
/*   Updated: 2023/10/28 16:15:55 by takuya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_lst
{
	struct s_lst	*prev;
	int				nbr;
	int				assyuku_zahyou;
	struct s_lst	*next;
}					t_lst;

char				*do_sa(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest);
char				*do_sb(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest);
char				*do_ss(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest);
char				*do_pb(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest);
char				*do_pa(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest);
char				*do_ra(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest);
char				*do_rb(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest);
char				*do_rr(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest);
char				*do_rra(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest);
char				*do_rrb(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest);
char				*do_rrr(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest);

int					is_sorted(t_lst **lst_a_pp, t_lst **lst_b_pp);
void				push_swap(t_lst *lst_a_pp, t_lst *lst_b_pp);
t_lst				*fill_list(int argc, char **argv);
char				*tiny_sort(t_lst **lst_a_pp, t_lst **lst_b_pp, char *dest);
char				*semi_tiny_sort(t_lst **list_a_pp, t_lst **list_b_pp,
						char *dest);
char				*tiny_sort_r(t_lst **lst_a_pp, t_lst **lst_b_pp,
						char *dest);
char				*semi_tiny_sort_r(t_lst **list_a_pp, t_lst **list_b_pp,
						char *dest);

char				*operator(t_lst **list_a, t_lst **list_b, char *dest);
void				display_list(t_lst *lst_a, t_lst *lst_b, char *dest);
int					check_list(int argc, char **argv);

void	sample(t_lst **list_a, t_lst **list_b, char **dest, int size);


char				*ft_strjoin_ps(char *s1, char *s2);
size_t				ft_strlen(const char *c);

void				ft_lstadd_front_ps(t_lst **lst_pp, t_lst *new_p);
t_lst				*ft_lstnew_ps(int content);
void				ft_lstclear_ps(t_lst **lst_pp);
int					ft_lstsize_ps(t_lst *lst_p);
t_lst				*ft_lstlast(t_lst *lst_p);
int					ft_atoi(const char *str);
void				get_assyuku_zahyou(t_lst **dest_pp);
char				*quick_sort(t_lst **list_a, t_lst **list_b, char *dest);

#endif
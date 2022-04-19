/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:41:49 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/19 09:57:57 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"

/* Création de la structure s_list et t_list */

typedef struct s_list	t_list;

struct s_list
{
	int		i;
	int		index;
	t_list	*next;
};

/* Checking d'erreurs */
int		ft_check_tab_max(int a, char *str);
int		ft_check_same(int len, int *tab);
int		ft_check_num(char *str);
int		*ft_check(int len, char **str);
int		*ft_check2(int len, char **str);

/* Composition du main pour le programme */
int		ft_lstlen(char **tab);
int		*ft_read(int argc, char **argv, int *res);

/* Structure liste chainée */
t_list	*ft_lstnewbis(int content);
void	ft_lstadd(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlastbis(t_list **lst);
t_list	*ft_read_lst(int *tab, int len);

/* Gestion du tri */
int		ft_list_min(t_list **lst);
int		check_sort(t_list **lst);
t_list	*ft_before_last_lst(t_list **lst);
void	ft_read_sort(t_list **lst_a, int len);

/* Tri de taille 3 */
void	ft_2(t_list **lst_a, t_list **lst_b);
void	ft_5(t_list **lst_a);
void	ft_len3(t_list **lst_a, t_list **lst_b);

/* Tri de taille 4 */
void	ft_4_1(t_list **lst_a, t_list **lst_b);
void	ft_4_2(t_list **lst_a, t_list **lst_b);
void	ft_4_3(t_list **lst_a, t_list **lst_b);
void	ft_4_4(t_list **lst_a, t_list **lst_b);
void	ft_len4(t_list **lst_a, t_list **lst_b);

/* Tri de taille 5 */
void	ft_5_3(t_list **lst_a, t_list **lst_b);
void	ft_5_4(t_list **lst_a, t_list **lst_b);
void	ft_5_5(t_list **lst_a, t_list **lst_b);
void	ft_len5(t_list **lst_a, t_list **lst_b);

/* Tri de taille 6 */
void	ft_6_3(t_list **lst_a, t_list **lst_b);
void	ft_6_4(t_list **lst_a, t_list **lst_b);
void	ft_6_5(t_list **lst_a, t_list **lst_b);
void	ft_6_6(t_list **lst_a, t_list **lst_b);
void	ft_len6(t_list **lst_a, t_list **lst_b);

/* Tri de taille supérieur à 6 */
int		ft_get_bits(int num);
void	sort_unite(t_list **lst_a, t_list **lst_b, int j, int len);
void	ft_sortall(t_list **lst_a, t_list **lst_b, int len);

/* Indexage */
void	ft_index(t_list **lst_a, int i, int index);
void	indexlist(t_list **lst_a);

/* Instructions algorithme */
void	ft_sa(t_list **lst);
void	ft_ra(t_list **lst);
void	ft_rra(t_list **lst);
void	ft_pb(t_list **lst_a, t_list **lst_b);
void	ft_pa(t_list **lst_a, t_list **lst_b);

#endif
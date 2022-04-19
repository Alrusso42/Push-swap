/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 08:55:37 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/19 09:47:38 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Récupère la valeur minimale de la liste */
int	ft_list_min(t_list **lst)
{
	t_list	*tmp;
	int		res;

	tmp = *lst;
	res = tmp->i;
	tmp = tmp->next;
	while (tmp)
	{
		if (res > tmp->i)
			res = tmp->i;
		tmp = tmp->next;
	}
	return (res);
}

/* Vérifie si le tri est bien effectué */
int	check_sort(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp->next)
	{
		if (tmp->i > tmp->next->i)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

/* Récupère l'avant dernier de la liste */
t_list	*ft_before_last_lst(t_list **lst)
{
	while ((*lst)->next->next)
		*lst = (*lst)->next;
	return (*lst);
}

/* Choisi le bon tri selon la taille de la liste */
void	ft_read_sort(t_list **lst_a, int len)
{
	t_list	*lst_b;

	lst_b = NULL;
	if (check_sort(lst_a))
	{
		if (len == 2)
			ft_sa(lst_a);
		else if (len == 3)
			ft_len3(lst_a, &lst_b);
		else if (len == 4)
			ft_len4(lst_a, &lst_b);
		else if (len == 5)
			ft_len5(lst_a, &lst_b);
		else if (len == 6)
			ft_len6(lst_a, &lst_b);
		else
			ft_sortall(lst_a, &lst_b, len);
	}
}
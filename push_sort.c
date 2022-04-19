/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 08:55:37 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/19 09:02:01 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Récupère la valeur minimale de la liste */
int	ft_list_min(t_list **list)
{
	t_list	*tmp;
	int		res;

	tmp = *list;
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

/* Vérifie si le trie est bien effectué */
int	check_sort(t_list **list)
{
	int		j;
	t_list	*tmp;

	j = 0;
	tmp = *list;
	while (tmp->next)
	{
		if (tmp->i > tmp->next->i)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

/* Récupère l'avant dernier de la liste */
t_list	*ft_before_last_list(t_list **list)
{
	while ((*list)->next->next)
		*list = (*list)->next;
	return (*list);
}

/* Choisi le bon tri selon la taille de la liste */
void	ft_read_sort(t_list **list_a, int len)
{
	t_list	*list_b;

	list_b = NULL;
	if (check_sort(list_a))
	{
		if (len == 2)
			ft_sa(list_a);
		else if (len == 3)
			ft_len3(list_a, &list_b);
		else if (len == 4)
			ft_len4(list_a, &list_b);
		else if (len == 5)
			ft_len5(list_a, &list_b);
		else if (len == 6)
			ft_len6(list_a, &list_b);
		else
			ft_sortall(list_a, &list_b, len);
	}
}
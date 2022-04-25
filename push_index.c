/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 10:01:56 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/25 08:56:10 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_list **lst_a, int i, int index)
{
	t_list	*tmp;

	tmp = *lst_a;
	while (tmp->i != i)
		tmp = tmp->next;
	tmp->index = index;
}

void	indexlist(t_list **lst_a)
{
	t_list	*tmp;
	t_list	*tmp2;
	int		i;
	int		index;

	tmp = *lst_a;
	i = tmp->i;
	index = 0;
	while (tmp)
	{
		tmp2 = *lst_a;
		i = tmp->i;
		while (tmp2)
		{
			if (tmp2->i < i)
				index++;
			tmp2 = tmp2->next;
		}
		ft_index(lst_a, i, index);
		index = 0;
		tmp = tmp->next;
	}
}

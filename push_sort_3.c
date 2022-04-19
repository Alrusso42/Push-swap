/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:52:37 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/19 09:55:18 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_2(t_list **lst_a, t_list **lst_b)
{
	(void) lst_b;
	ft_rra(lst_a);
	ft_sa(lst_a);
}

void	ft_5(t_list **lst_a)
{
	ft_sa(lst_a);
	ft_rra(lst_a);
}

void	ft_len3(t_list **lst_a, t_list **lst_b)
{
	if (((*lst_a)->i < (*lst_a)->next->i)
		&& ((*lst_a)->next->i > (*lst_a)->next->next->i)
		&& ((*lst_a)->next->next->i > (*lst_a)->i))
		ft_2(lst_a, lst_b);
	else if (((*lst_a)->i > (*lst_a)->next->i)
		&& ((*lst_a)->next->i < (*lst_a)->next->next->i)
		&& ((*lst_a)->next->next->i > (*lst_a)->i))
		ft_sa(lst_a);
	else if (((*lst_a)->i < (*lst_a)->next->i)
		&& ((*lst_a)->next->i > (*lst_a)->next->next->i)
		&& ((*lst_a)->next->next->i < (*lst_a)->i))
		ft_rra(lst_a);
	else if (((*lst_a)->i > (*lst_a)->next->i)
		&& ((*lst_a)->next->i < (*lst_a)->next->next->i)
		&& ((*lst_a)->next->next->i < (*lst_a)->i))
		ft_ra(lst_a);
	else if (((*lst_a)->i > (*lst_a)->next->i)
		&& ((*lst_a)->next->i > (*lst_a)->next->next->i)
		&& ((*lst_a)->next->next->i < (*lst_a)->i))
		ft_5(lst_a);
}
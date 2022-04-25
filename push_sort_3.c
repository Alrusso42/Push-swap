/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:52:37 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/25 08:55:20 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Instruction dans le cas où le premier nombre 
est plus grand que le deuxième */
void	ft_2(t_list **lst_a, t_list **lst_b)
{
	(void) lst_b;
	ft_rra(lst_a);
	ft_sa(lst_a);
}

/* Instruction dans le cas où le premier nombre 
est plus petit que le deuxième */
void	ft_5(t_list **lst_a)
{
	ft_sa(lst_a);
	ft_rra(lst_a);
}

/* Instruction pour les listes de tailles 3 */
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

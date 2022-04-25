/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:01:19 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/25 08:54:36 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_4_1(t_list **lst_a, t_list **lst_b)
{
	ft_pb(lst_a, lst_b);
	ft_len3(lst_a, lst_b);
	ft_pa(lst_a, lst_b);
}

void	ft_4_2(t_list **lst_a, t_list **lst_b)
{
	ft_sa(lst_a);
	ft_pb(lst_a, lst_b);
	ft_len3(lst_a, lst_b);
	ft_pa(lst_a, lst_b);
}

void	ft_4_3(t_list **lst_a, t_list **lst_b)
{
	ft_rra(lst_a);
	ft_rra(lst_a);
	ft_pb(lst_a, lst_b);
	ft_len3(lst_a, lst_b);
	ft_pa(lst_a, lst_b);
}

void	ft_4_4(t_list **lst_a, t_list **lst_b)
{
	ft_rra(lst_a);
	ft_pb(lst_a, lst_b);
	ft_len3(lst_a, lst_b);
	ft_pa(lst_a, lst_b);
}

/* Instruction pour les listes de tailles 4 */
void	ft_len4(t_list **lst_a, t_list **lst_b)
{
	int	tmp;

	(void) lst_b;
	tmp = ft_list_min(lst_a);
	if ((*lst_a)->i == tmp)
		ft_4_1(lst_a, lst_b);
	else if ((*lst_a)->next->i == tmp)
		ft_4_2(lst_a, lst_b);
	else if ((*lst_a)->next->next->i == tmp)
		ft_4_3(lst_a, lst_b);
	else if ((*lst_a)->next->next->next->i == tmp)
		ft_4_4(lst_a, lst_b);
}

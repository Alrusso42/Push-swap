/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:01:24 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/25 08:54:31 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_5_3(t_list **lst_a, t_list **lst_b)
{
	ft_ra(lst_a);
	ft_ra(lst_a);
	ft_pb(lst_a, lst_b);
	ft_len4(lst_a, lst_b);
	ft_pa(lst_a, lst_b);
}

void	ft_5_4(t_list **lst_a, t_list **lst_b)
{
	ft_rra(lst_a);
	ft_rra(lst_a);
	ft_pb(lst_a, lst_b);
	ft_len4(lst_a, lst_b);
	ft_pa(lst_a, lst_b);
}

void	ft_5_5(t_list **lst_a, t_list **lst_b)
{
	ft_rra(lst_a);
	ft_pb(lst_a, lst_b);
	ft_len4(lst_a, lst_b);
	ft_pa(lst_a, lst_b);
}

void	ft_len5(t_list **lst_a, t_list **lst_b)
{
	int	tmp;

	tmp = ft_list_min(lst_a);
	if ((*lst_a)->i == tmp)
	{
		ft_pb(lst_a, lst_b);
		ft_len4(lst_a, lst_b);
		ft_pa(lst_a, lst_b);
	}
	else if ((*lst_a)->next->i == tmp)
	{
		ft_sa(lst_a);
		ft_pb(lst_a, lst_b);
		ft_len4(lst_a, lst_b);
		ft_pa(lst_a, lst_b);
	}
	else if ((*lst_a)->next->next->i == tmp)
		ft_5_3(lst_a, lst_b);
	else if ((*lst_a)->next->next->next->i == tmp)
		ft_5_4(lst_a, lst_b);
	else if ((*lst_a)->next->next->next->next->i == tmp)
		ft_5_5(lst_a, lst_b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort_6.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:01:29 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/20 09:15:24 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_6_3(t_list **lst_a, t_list **lst_b)
{
	ft_ra(lst_a);
	ft_ra(lst_a);
	ft_pb(lst_a, lst_b);
	ft_len5(lst_a, lst_b);
	ft_pa(lst_a, lst_b);
}

void	ft_6_4(t_list **lst_a, t_list **lst_b)
{
	ft_ra(lst_a);
	ft_ra(lst_a);
	ft_ra(lst_a);
	ft_pb(lst_a, lst_b);
	ft_len5(lst_a, lst_b);
	ft_pa(lst_a, lst_b);
}

void	ft_6_5(t_list **lst_a, t_list **lst_b)
{
	ft_rra(lst_a);
	ft_rra(lst_a);
	ft_pb(lst_a, lst_b);
	ft_len5(lst_a, lst_b);
	ft_pa(lst_a, lst_b);
}

void	ft_6_6(t_list **lst_a, t_list **lst_b)
{
	ft_rra(lst_a);
	ft_pb(lst_a, lst_b);
	ft_len5(lst_a, lst_b);
	ft_pa(lst_a, lst_b);
}

void	ft_len6(t_list **lst_a, t_list **lst_b)
{
	int	tmp;

	tmp = ft_list_min(lst_a);
	if ((*lst_a)->i == tmp)
	{
		ft_pb(lst_a, lst_b);
		ft_len5(lst_a, lst_b);
		ft_pa(lst_a, lst_b);
	}
	else if ((*lst_a)->next->i == tmp)
	{
		ft_sa(lst_a);
		ft_pb(lst_a, lst_b);
		ft_len5(lst_a, lst_b);
		ft_pa(lst_a, lst_b);
	}
	else if ((*lst_a)->next->next->i == tmp)
		ft_6_3(lst_a, lst_b);
	else if ((*lst_a)->next->next->next->i == tmp)
		ft_6_4(lst_a, lst_b);
	else if ((*lst_a)->next->next->next->next->i == tmp)
		ft_6_5(lst_a, lst_b);
	else if ((*lst_a)->next->next->next->next->next->i == tmp)
		ft_6_6(lst_a, lst_b);
}
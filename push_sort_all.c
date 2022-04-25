/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:01:34 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/25 08:53:57 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_bits(int num)
{
	int	i;

	i = 31;
	while ((num >> i) != 1)
		i--;
	return (i);
}

void	sort_unite(t_list **lst_a, t_list **lst_b, int j, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if ((((*lst_a)->index >> j) & 1) == 0)
			ft_pb(lst_a, lst_b);
		else
			ft_ra(lst_a);
		i++;
	}
}

void	ft_sortall(t_list **lst_a, t_list **lst_b, int len)
{
	int	len_bit;
	int	j;

	indexlist(lst_a);
	j = 0;
	len_bit = ft_get_bits(len -1);
	while (j <= len_bit)
	{
		sort_unite(lst_a, lst_b, j, len);
		while (*lst_b)
			ft_pa(lst_a, lst_b);
		j++;
	}
}

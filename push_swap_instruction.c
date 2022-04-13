/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_instruction.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:11:13 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/13 10:30:35 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "push_swap.h"

/* Echange les deux premiers éléments tout en haut de la stack A */
/* Ne fais rien s'il n'y a qu'un ou deux éléments */

void	ft_sa(t_list **list)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *list;
	*list = (*list)->next;
	tmp2 = *list;
	*list = (*list)->next;
	tmp2->next = tmp;
	tmp->next = *list;
	ft_lstadd(&*list, tmp);
	ft_lstadd(&*list, tmp2);
	write(1, "sa\n", 3); /* Remplacer write par ft_printf */	
}

/* Monte de un cran tous les éléments de la liste */
/* Le premier élément devient le dernier */

void	ft_ra(t_list **list)
{
	t_list	*tmp;

	tmp = *list;
	*list = (*list)->next;
	tmp->next = NULL;
	ft_lstadd_back(&*list, tmp);
	write(1, "ra\n", 3); /* Remplacer write par ft_printf */
}

/* Descend de un cran tous les éléments de la liste */
/* Le dernier élément devient le premier */

void	ft_rra(t_list **list)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *list;
	tmp2 = ft_before_last_list(&*list);
	*list = ft_lstlastbis(&*list);
	(*list)->next = tmp;
	tmp2->next = NULL;
	write(1, "rra\n", 4); /* Remplacer write par ft_printf */
}

/* Prend le premier élément tout en haut de A et le met de tout en haut de B */
/* Ne fais rien si A est vide */

void	ft_pb(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp->next = *list_b;
	*list_b = tmp;
	write(1, "pb\n", 3); /* Remplacer write par ft_printf */
}

/* Prend le premier élément tout en haut de B et le met tout en haut de A */
/* Ne fais rien si B est vide */

void	ft_pa(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp->next = *list_a;
	*list_a = tmp;
	write(1, "pa\n", 3); /* Remplacer write par ft_printf */
}
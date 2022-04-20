/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_instruction.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 09:11:13 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/20 09:39:56 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "push_swap.h"

/* Echange les deux premiers éléments tout en haut de la stack A */
/* Ne fais rien s'il n'y a qu'un ou deux éléments */

void	ft_sa(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *lst;
	*lst = (*lst)->next;
	tmp2 = *lst;
	*lst = (*lst)->next;
	tmp2->next = tmp;
	tmp->next = *lst;
	ft_lstadd(&*lst, tmp);
	ft_lstadd(&*lst, tmp2);
	write(1, "sa\n", 3); /* Remplacer write par ft_printf */	
}

/* Monte de un cran tous les éléments de la liste */
/* Le premier élément devient le dernier */

void	ft_ra(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	*lst = (*lst)->next;
	tmp->next = NULL;
	ft_lstadd_back(&*lst, tmp);
	write(1, "ra\n", 3); /* Remplacer write par ft_printf */
}

/* Descend de un cran tous les éléments de la liste */
/* Le dernier élément devient le premier */

void	ft_rra(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *lst;
	tmp2 = ft_before_last_lst(&*lst);
	*lst = ft_lstlastbis(&*lst);
	(*lst)->next = tmp;
	tmp2->next = NULL;
	write(1, "rra\n", 4); /* Remplacer write par ft_printf */
}

/* Prend le premier élément tout en haut de A et le met de tout en haut de B */
/* Ne fais rien si A est vide */

void	ft_pb(t_list **lst_a, t_list **lst_b)
{
	t_list	*tmp;

	tmp = *lst_a;
	*lst_a = (*lst_a)->next;
	tmp->next = *lst_b;
	*lst_b = tmp;
	write(1, "pb\n", 3); /* Remplacer write par ft_printf */
}

/* Prend le premier élément tout en haut de B et le met tout en haut de A */
/* Ne fais rien si B est vide */

void	ft_pa(t_list **lst_a, t_list **lst_b)
{
	t_list	*tmp;

	tmp = *lst_b;
	*lst_b = (*lst_b)->next;
	tmp->next = *lst_a;
	*lst_a = tmp;
	write(1, "pa\n", 3); /* Remplacer write par ft_printf */
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 08:16:52 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/25 08:51:33 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Création de liste avec sa structure, avec attribution de mémoire */

t_list	*ft_lstnewbis(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->i = content;
	return (new);
}

/*  Permet d'ajouter un nouvel élément au début la liste avec "new" */

void	ft_lstadd(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/* Permet d'ajouter un nouvel élément à la fin de la liste "new" */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	if (*lst)
	{
		tmp = *lst;
		while (tmp->next)
			tmp = tmp->next;
			tmp->next = new;
	}
	else
		*lst = new;
}

/* Renvoie le dernier élément de la liste */

t_list	*ft_lstlastbis(t_list **lst)
{
	while ((*lst)->next)
		*lst = (*lst)->next;
	return (*lst);
}

/* Permet de lire la liste */

t_list	*ft_read_lst(int *tab, int len)
{
	t_list	*lst;	
	t_list	*next;
	int		i;

	i = 1;
	lst = NULL;
	if (len > 0)
	{
		lst = ft_lstnewbis(tab[0]);
		while (i < len)
		{
			next = ft_lstnewbis(tab[i]);
			ft_lstadd_back(&lst, next);
			i++;
		}
	}
	return (lst);
}

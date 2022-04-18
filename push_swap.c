/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 09:24:23 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/18 09:56:48 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Permet de calculer la taille du tableau */
int	ft_lstlen(char **lst)
{
	int	i;

	i = 0;
	while (lst[i])
		i++;
	return (i);
}

/* Libère la mémoire de l'espace déjà parcourru */
void	ft_freemalloc(t_list **lst)
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
	free(*lst);
}

/* Lecture d'arguments et vérification d'erreurs */
int	*ft_read(int argc, char **argv, int *res)
{
	char	**str;
	int		*tab;
	int		len;

	tab = NULL;
	if (ft_strchr(argv[1], 32))
	{
		str = ft_split(argv[1], ' ');
		len = ft_lstlen(str);
		tab = ft_check2(len, str);
		*res = len;
	}
	else
	{
		argc = argc -1;
		tab = ft_check(argc, argv);
		*res = argc;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	int		len;
	int		*tab;
	t_list	*list;

	list = NULL;
	if (argc == 1)
		return (0);
	else
	{
		tab = ft_read(argc, argv, &len);
		if (tab)
		{
			list = ft_read_lst(tab, len);
			ft_read_sort(&list, len);
		}
	}
	free(tab);
	ft_freemalloc(&list);
}
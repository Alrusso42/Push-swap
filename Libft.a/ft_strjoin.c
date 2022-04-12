/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:03:18 by alrusso           #+#    #+#             */
/*   Updated: 2022/02/24 10:37:12 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;
	char	*final;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len + 1;
	final = malloc(sizeof(char) * total_len);
	if (!final)
		return (0);
	ft_memmove(final, s1, s1_len);
	ft_memmove(final + s1_len, s2, s2_len);
	final[total_len - 1] = '\0';
	return (final);
}

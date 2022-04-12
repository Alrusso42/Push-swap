/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:05:48 by alrusso           #+#    #+#             */
/*   Updated: 2022/02/24 08:40:29 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i + j < len)
	{
		if (haystack[i + j] == needle[j])
		{
			if (needle[++j] == '\0')
				return ((char *)haystack + i);
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}

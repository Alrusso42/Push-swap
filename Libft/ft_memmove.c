/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:54:24 by alrusso           #+#    #+#             */
/*   Updated: 2022/04/20 09:40:03 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*m1;
	unsigned char	*m2;

	i = 0;
	m1 = (unsigned char *)dst;
	m2 = (unsigned char *)src;
    if (!dst && !src)
        return (NULL);
	else if (m1 > m2)
	{
		while (i < len)
		{
			m1[len - 1] = m2[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			m1[i] = m2[i];
			i++;
		}
	}
	return (dst);
}

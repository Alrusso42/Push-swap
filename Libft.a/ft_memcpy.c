/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:33:22 by alrusso           #+#    #+#             */
/*   Updated: 2022/03/03 09:45:30 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*m1;
	unsigned char	*m2;

	m1 = (unsigned char *)dst;
	m2 = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		*m1++ = *m2++;
		n--;
	}
	return (dst);
}

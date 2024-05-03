/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:45:44 by bapasqui          #+#    #+#             */
/*   Updated: 2023/11/09 18:45:46 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	size_t			c;
	size_t			b;
	unsigned char	*s1;
	unsigned char	*s2;

	c = 0;
	b = 0;
	s1 = (unsigned char *)pointer1;
	s2 = (unsigned char *)pointer2;
	while (b < size)
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
		c++;
		b++;
	}
	return (0);
}

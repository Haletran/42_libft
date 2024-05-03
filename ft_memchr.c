/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:45:35 by bapasqui          #+#    #+#             */
/*   Updated: 2023/11/09 18:45:37 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t	c;
	char	*mem;

	mem = (char *)memoryBlock;
	c = 0;
	while (c < size)
	{
		if (mem[c] == (char)searchedChar)
			return (&mem[c]);
		c++;
	}
	return (0);
}

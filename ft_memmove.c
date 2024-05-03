/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:46:01 by bapasqui          #+#    #+#             */
/*   Updated: 2023/11/09 18:46:03 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;

	tmp = (unsigned char *)dest;
	tmp2 = (unsigned char *)src;
	if (size > 0)
	{
		if (src > dest)
			ft_memcpy(tmp, tmp2, size);
		else if (dest > src)
			while (size--)
				tmp[size] = tmp2[size];
	}
	return (tmp);
}

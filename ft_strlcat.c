/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:47:56 by bapasqui          #+#    #+#             */
/*   Updated: 2023/11/10 13:27:58 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	if ((!dst || !src) && !size)
		return (0);
	i = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dest_len < (size - 1) && size > 0)
	{
		while (src[i] && dest_len < (size - 1))
		{
			dst[dest_len] = src[i];
			i++;
			dest_len++;
		}
		dst[dest_len] = 0;
	}
	if (dest_len > size)
		dest_len = size;
	return (src_len + dest_len - i);
}

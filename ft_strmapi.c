/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:48:23 by bapasqui          #+#    #+#             */
/*   Updated: 2023/11/09 18:48:25 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	int				d;
	unsigned int	c;

	c = 0;
	if (!s)
		return (NULL);
	d = ft_strlen(s);
	dest = malloc(sizeof(char) * (d + 1));
	if (!dest)
		return (NULL);
	while (s[c])
	{
		dest[c] = f(c, s[c]);
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

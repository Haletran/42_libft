/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:48:56 by bapasqui          #+#    #+#             */
/*   Updated: 2023/11/09 18:48:59 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_trim(char d, char const *set)
{
	int	c;

	c = 0;
	while (set[c] != '\0')
	{
		if (set[c] == d)
			return (1);
		c++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;

	start = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (check_trim(s1[start], set))
		start++;
	while (check_trim(s1[end], set))
		end--;
	result = ft_substr(s1, start, (end - start) + 1);
	return (result);
}

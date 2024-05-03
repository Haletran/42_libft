/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:46:38 by bapasqui          #+#    #+#             */
/*   Updated: 2023/11/09 18:46:43 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	c;

	c = 0;
	if (s == 0)
		return ;
	while (s[c] != 0)
	{
		write(fd, &s[c], 1);
		c++;
	}
	write(fd, "\n", 1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:54:10 by jleroux           #+#    #+#             */
/*   Updated: 2021/10/22 18:17:49 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *b, int len)
{
	if (len == 0)
		return ;
	while (--len >= 0)
	{
		*(char *)(b + len) = 0;
	}
	return ;
}

/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	main(void) {
	void	*mem;

	mem = malloc(sizeof(*mem) * 5);
	ft_bzero(mem, 5);
	free(mem);
	return (0);
}
*/

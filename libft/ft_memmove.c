/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:02:30 by jleroux           #+#    #+#             */
/*   Updated: 2021/10/22 16:42:12 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		i = len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int) len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

/*
#include "libft.h"

int	main(void)
{
	char	srccpy[50] = "foobar";
	char	srcmov[50] = "foobar";

#define LEN 6
	memcpy(&srccpy[3], &srccpy[0], LEN);
	memmove(&srcmov[3], &srcmov[0], LEN);
	printf("%s\n", srccpy);
	printf("%s\n", srcmov);
	return (0);
}
*/

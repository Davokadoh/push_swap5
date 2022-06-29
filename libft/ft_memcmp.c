/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:50:40 by jleroux           #+#    #+#             */
/*   Updated: 2021/10/25 11:40:08 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*
#include <string.h>

int	main(void)
{
char	s1[50] = "1234";
char	s2[50] = "12345";

printf("%d\n", ft_memcmp(s1, s2, sizeof(s1)));
printf("%d\n", memcmp(s1, s2, sizeof(s1)));
}
*/

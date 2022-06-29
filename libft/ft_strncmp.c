/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:02:13 by jleroux           #+#    #+#             */
/*   Updated: 2021/10/13 15:53:43 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		}
		i++;
	}
	if (i == n)
		i--;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("'\200'", "'\0'", 10));
	printf("%d\n", ft_strncmp("ab", "aa", 2));
	printf("%d\n", ft_strncmp("aa", "ab", 2));
	printf("%d\n", ft_strncmp("ab", "ab", 2));
	printf("%d\n", ft_strncmp("", "", 2));
	printf("%d\n", ft_strncmp("123456789", "123456789abcdefgh", 50));
	printf("%d\n", ft_strncmp("123456789", "123456789abcdefgh", 9));
}
*/

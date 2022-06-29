/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:04:50 by jleroux           #+#    #+#             */
/*   Updated: 2021/10/19 12:50:37 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		*(unsigned char *)(b + i++) = (unsigned char) c;
	return (b);
}

/*
#include <string.h>

int	main(void)
{
	char	arr[LEN];
	int		i;

	printf("Array elements are (before ft_memset()): \n");
	i = 0;
	while (i < LEN)
		printf("%d ", arr[i++]);
	printf("\n");
	ft_memset(arr, 0, LEN);
	printf("Array elements are (after ft_memset()): \n");
	i = 0;
	while (i < LEN)
		printf("%d ", arr[i++]);
	printf("\n");
	ft_memset(arr, 1, 3);
	ft_memset(arr + 3, 2, 3);
	ft_memset(arr + 6, 3, 3);
	printf("Array elements are (after ft_memset()): \n");
	i = 0;
	while (i < LEN)
		printf("%d ", arr[i++]);
	printf("\n");
	return (0);
}
*/

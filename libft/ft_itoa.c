/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:53:50 by jleroux           #+#    #+#             */
/*   Updated: 2021/10/22 17:49:10 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	int_size(unsigned int n)
{
	if (n > 9)
		return (int_size(n / 10) + 1);
	return (1);
}

void	add_digit(unsigned int n, char *result)
{
	*result = n % 10 + 48;
	if (n > 9)
		add_digit((n / 10), result - 1);
	return ;
}

char	*ft_itoa(int n)
{
	char			*result;
	unsigned int	nbr;
	int				i;

	if (n < 0)
	{
		nbr = -n;
		i = int_size(nbr);
		i++;
	}
	else
	{
		nbr = n;
		i = int_size(nbr);
	}
	result = (char *) malloc(i * sizeof(char) + 1);
	if (!result)
		return (NULL);
	result[i] = 0;
	add_digit(nbr, &result[i - 1]);
	if (n < 0)
		*result = '-';
	return (result);
}

/*
int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(-9));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(9));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(2147483647));
}
*/

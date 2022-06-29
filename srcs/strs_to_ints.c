/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strs_to_ints.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 10:59:58 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/29 15:05:37 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

long long	*strs_to_ints(char **strs)
{
	int			i;
	long long	*ints;

	i = 0;
	ints = (long long *)malloc(sizeof(long long) * count_arr(strs));
	while (strs[i] != NULL)
	{
		if (is_int(strs[i]))
			ints[i] = ft_atol(strs[i]);
		else
			ints[i] = 0;
		i++;
	}
	return (ints);
}

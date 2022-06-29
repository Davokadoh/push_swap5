/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:33:55 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/29 15:02:53 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	copy_stack(t_stack *src)
{
	t_stack	new;
	int		i;

	new.size = src->size;
	new.arr = (long long *)malloc(sizeof(long long) * (new.size));
	i = -1;
	while (++i < new.size)
		new.arr[i] = src->arr[i];
	return (new);
}

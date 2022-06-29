/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_empty_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:40:20 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/29 15:02:38 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	create_empty_stack(int size)
{
	t_stack	stack;

	stack.arr = (long long *)malloc(sizeof(long long) * size);
	stack.size = 0;
	return (stack);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 10:59:18 by jleroux           #+#    #+#             */
/*   Updated: 2022/06/29 15:03:22 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

typedef struct s_stack
{
	long long	*arr;
	int			size;
}				t_stack;

void		free_strs(char **strs);
char		**copy_strs(char **strs, int size);
int			is_int(char *str);
int			check_input(char **strs);
int			is_sorted(t_stack *stack);
int			get_smallest(t_stack *stack);
int			get_biggest(t_stack *stack);
int			count_arr(char **arr);
long long	*strs_to_ints(char **strs);
void		chunk_to_b(t_stack *a, t_stack *b);
void		bubble_sort(t_stack *stack);
void		smart_rotate(char ch, t_stack *stack, int target);
void		sort(t_stack *a);
void		shift_left(long long *arr, int size);
void		shift_right(long long *arr, int size);
void		rotate(char ch, t_stack *stack);
void		push(char ch, t_stack *src, t_stack *dst);
void		swap(char ch, t_stack *stack);
void		rev_rotate(char ch, t_stack *stack);
void		free_stack(t_stack *stack);
t_stack		create_empty_stack(int size);
t_stack		copy_stack(t_stack *src);

#endif

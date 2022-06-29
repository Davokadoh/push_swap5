/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:26:47 by jleroux           #+#    #+#             */
/*   Updated: 2021/10/26 13:39:37 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst)
		return (NULL);
	new = ft_lstnew(lst -> content);
	if (!new)
		return (NULL);
	new -> content = f(new -> content);
	if (lst -> next != NULL)
		new -> next = ft_lstmap(lst -> next, *(*f), *del);
	return (new);
}

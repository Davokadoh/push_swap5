/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:01:28 by jleroux           #+#    #+#             */
/*   Updated: 2021/10/19 12:54:24 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_length;
	size_t	src_length;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dst_length > size - 1 || size == 0)
		return (src_length + size);
	while (*dst != '\0' && --size > 0)
		dst++;
	while (*src != '\0' && --size > 0)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_length + src_length);
}

/*
#include <string.h>
#include <stdlib.h>

   int	main(void)
   {
   char	*dst1;
   char	*dst2;
   char	*src = "lorem";
   int		dst_length = 15;

   if (!(dst1 = (char *)malloc(sizeof(*dst1) * dst_length)))
   return (0);
   if (!(dst2 = (char *)malloc(sizeof(*dst2) * dst_length)))
   return (0);
   dst1[11] = 'a';
   dst2[11] = 'a';
   ft_strlcat(dst1, src, 15);
   printf("%s\n", dst1);
   printf("%zu\n", ft_strlen(dst1));
   strlcat(dst2, src, 15);
   printf("%s\n", dst2);
   printf("%zu\n", strlen(dst2));
   }
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkayadib <zkayadib@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:56:52 by zkayadib          #+#    #+#             */
/*   Updated: 2024/11/02 07:02:10 by zkayadib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*n_dst;
	char	*n_src;
	size_t	i;

	n_dst = (char *)dst;
	n_src = (char *)src;
	if (dst == src)
		return (dst);
	else if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			*(n_dst + i - 1) = *(n_src + i - 1);
			i--;
		}
	}
	else
		n_dst = ft_memcpy(dst, src, len);
	return (n_dst);
}
/*int main ()
{
	char a[] = "zulfiye";
	//char c[] = "samet";
	char b[] = "zulfiye";
	
	printf("%s\n", ft_memmove(a + 2, a, 3));
	printf("%s\n", memmove(b + 2, b, 3));

}*/
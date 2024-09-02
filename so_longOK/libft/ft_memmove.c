/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:02:29 by thsanche          #+#    #+#             */
/*   Updated: 2024/04/06 11:09:33 by thsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = n - 1;
	s = (char *)src;
	d = (char *)dest;
	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	if (src < dest && src + n > dest)
	{
		while (i)
		{
			d[i] = s[i];
			i--;
		}
		d[i] = s[i];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

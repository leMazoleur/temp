/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:21:36 by thsanche          #+#    #+#             */
/*   Updated: 2024/04/06 11:09:09 by thsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str;
	char	*str2;
	size_t	i;

	str = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (str[i] != str2[i])
			return ((unsigned char)str[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

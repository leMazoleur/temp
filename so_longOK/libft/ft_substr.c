/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:22:08 by thsanche          #+#    #+#             */
/*   Updated: 2024/04/06 11:13:57 by thsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	length;
	size_t	i;

	i = 0;
	length = 0;
	while (i < start + len && s[i])
	{
		if (i >= start)
			length++;
		i++;
	}
	length++;
	i = 0;
	substr = (char *)malloc(length * sizeof(char));
	if (!substr)
		return (NULL);
	while (i < length - 1)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

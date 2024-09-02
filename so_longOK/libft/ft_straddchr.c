/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_straddchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:02:34 by thsanche          #+#    #+#             */
/*   Updated: 2024/04/06 11:11:02 by thsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_straddchr(char *str, char c)
{
	char	*out;
	int		len;

	len = 0;
	if (str != NULL)
		len = ft_strlen(str);
	out = (char *)malloc(sizeof(char) * (len + 2));
	if (out == NULL)
		return (NULL);
	if (str != NULL)
		ft_strlcpy(out, (char *)str, len + 1);
	out[len] = c;
	out[len + 1] = '\0';
	if (str != NULL)
		free(str);
	return (out);
}

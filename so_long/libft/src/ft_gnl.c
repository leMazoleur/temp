/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsanche <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:51:23 by thsanche          #+#    #+#             */
/*   Updated: 2024/09/02 20:10:22 by thsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

char	*ft_stradd(char *str, char buff)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)malloc(sizeof(char) * (ft_strlen(str) + 2));
	if (ret == NULL)
		return (NULL);
	while (str[i])
	{
		ret[i] = str[i];
		i++;
	}
	free(str);
	ret[i] = buff;
	ret[++i] = '\0';
	return (ret);
}

int	gnl(int fd, char **str)
{
	char	buff;
	int		ret;

	ret = read(fd, &buff, 1);
	while (ret > 0)
	{
		*str = ft_stradd(*str, buff);
		if (buff == '\n')
			return (ret);
		else
			ret += 1;
		ret = read(fd, &buff, 1);
	}
	if (ret == 0)
	{
		free(*str);
		*str = NULL;
	}
	return (ret);
}

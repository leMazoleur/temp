/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:12:39 by thsanche          #+#    #+#             */
/*   Updated: 2024/05/18 03:44:24 by thsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

long long int	ft_atoi(const char *str);
int				ft_isdigit(int c);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putstr(char *str);
char			**ft_split(char *str, char sep);
int				ft_strchr(char *str, char *cmp);
char			*ft_strdup(char *str);
size_t			ft_strlen(const char *str);
char			*ft_strncpy(char *str, int nb);
int				gnl(int fd, char **str);
char			*ft_strjoin(char *s1, char *s2);

#endif

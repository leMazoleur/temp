/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsanche <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:06:13 by thsanche          #+#    #+#             */
/*   Updated: 2024/09/11 22:38:01 by thsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

int	main(int argc, char **argv)
{
	if (argc != 5)
	{
		write(2, "Usage: ./pipex file1 \
cmd1 cmd2 file2\n",
				37);
		return (-1);
	}
	exec_pipex(argv[1], argv[2], argv[3], argv[4]);
	return (0);
}

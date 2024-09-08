/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsanche <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:07:17 by thsanche          #+#    #+#             */
/*   Updated: 2024/09/08 22:59:13 by thsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>


typedef struct s_pipex
{
	char	*infile;
	char	*outfile;
	char	*cmd1;
	char	*cmd2;
}	t_pipex;

void	parse_arguments(int argc, char **argv, t_pipex *pipex);

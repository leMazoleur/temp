/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsanche <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:07:17 by thsanche          #+#    #+#             */
/*   Updated: 2024/09/12 10:04:01 by thsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <unistd.h>

// Prototypes des fonctions
int		open_file(char *file, int flags);
void	exec_pipex(char *file1, char *cmd1, char *cmd2, char *file2);
void	handle_child1(int fd_in, int pipefd[2], char *cmd1);
void	handle_child2(int fd_out, int pipefd[2], char *cmd2);

#endif

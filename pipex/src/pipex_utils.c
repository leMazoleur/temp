/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsanche <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:06:29 by thsanche          #+#    #+#             */
/*   Updated: 2024/09/12 10:49:11 by thsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

void	handle_child1(int fd_in, int pipefd[2], char *cmd1)
{
	dup2(fd_in, STDIN_FILENO);
	dup2(pipefd[1], STDOUT_FILENO);
	close(pipefd[0]);
	execlp(cmd1, cmd1, NULL);
	perror("Erreur cmd1");
	exit(EXIT_FAILURE);
}

void	handle_child2(int fd_out, int pipefd[2], char *cmd2)
{
	dup2(pipefd[0], STDIN_FILENO);
	dup2(fd_out, STDOUT_FILENO);
	close(pipefd[1]);
	execlp(cmd2, cmd2, NULL);
	perror("Erreur cmd2");
	exit(EXIT_FAILURE);
}

void	exec_pipex(char *file1, char *cmd1, char *cmd2, char *file2)
{
	int	fd_in;
	int	fd_out;
	int	pipefd[2];

	pid_t pid1, pid2;
	fd_in = open_file(file1, O_RDONLY);
	if (fd_in == -1)
		exit(EXIT_FAILURE);
	fd_out = open_file(file2, O_WRONLY | O_CREAT | O_TRUNC);
	if (fd_out == -1)
		exit(EXIT_FAILURE);
	if (pipe(pipefd) == -1)
	{
		perror("Erreur pipe");
		exit(EXIT_FAILURE);
	}
	pid1 = fork();
	if (pid1 == 0)
		handle_child1(fd_in, pipefd, cmd1);
	pid2 = fork();
	if (pid2 == 0)
		handle_child2(fd_out, pipefd, cmd2);
	close(pipefd[0]);
	close(pipefd[1]);
	close(fd_in);
	close(fd_out);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
}

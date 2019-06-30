/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umoff <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 21:35:53 by umoff             #+#    #+#             */
/*   Updated: 2019/04/04 22:31:31 by umoff            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "displ.h"

int		main(int argc, char **argv)
{
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		disp_file(argv[1]);
	return (0);
}

void	disp_file(char *pathname)
{
	int		fd;
	char	character;

	fd = open(pathname, O_RDONLY);
	if (fd != -1)
		while (read(fd, &character, 1))
			write(1, &character, 1);
	close(fd);
}

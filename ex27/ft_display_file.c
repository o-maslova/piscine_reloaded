/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 20:33:42 by omaslova          #+#    #+#             */
/*   Updated: 2018/03/26 21:16:13 by omaslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int		main(int argc, char **argv)
{
	char	buf[2];
	int		fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd)
		{
			while (read(fd, buf, 1))
			{
				write(1, &buf[0], 1);
			}
			close(fd);
		}
	}
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		write(2, "File name missing.\n", 19);
	return (0);
}

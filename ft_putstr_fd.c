/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnieto-c <dnieto-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:23:07 by dnieto-c          #+#    #+#             */
/*   Updated: 2022/05/09 09:35:41 by dnieto-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*int	main(int argc, char **argv)
{
	int	fd;
	if (argc)
	{
		fd = open(argv[1], O_WRONLY);
		if (fd == -1)
			printf("Failed to open the file %s\n", argv[1]);
		ft_putstr_fd(argv[2], fd);
		close(fd);	
	}
}*/
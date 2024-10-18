/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:31:24 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 17:37:55 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* output a string to a file descriptor */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

// int	main(void)
// {
// 	char	str[] = "Hello World!";
// 	int		fd;

// 	fd = 1;
// 	ft_putstr_fd(str, fd);
// 	return (0);
// }
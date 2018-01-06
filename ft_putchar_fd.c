/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptyshevs <ptyshevs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:38:00 by ptyshevs          #+#    #+#             */
/*   Updated: 2017/11/09 11:49:01 by ptyshevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

/*
** @brief      Output char c to the file descriptor fd
**
** @note       Rewriting putchar to accept UTF-8 will break it's signature,
**             since it has char c, not int c in assignment specification
**
** @param      c     Character
** @param      fd    File descriptor
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

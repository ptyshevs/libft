/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptyshevs <ptyshevs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:42:00 by ptyshevs          #+#    #+#             */
/*   Updated: 2017/11/07 11:42:00 by ptyshevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

/*
** @brief      Output string to a standard output
**
** @param      s     String to output
*/

void	ft_putstr(const char *s)
{
	ft_putstr_fd(s, 1);
}

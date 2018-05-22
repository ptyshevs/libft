/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnls.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptyshevs <ptyshevs@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 19:02:30 by ptyshevs          #+#    #+#             */
/*   Updated: 2018/05/22 19:04:07 by ptyshevs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNLS_H
# define GNLS_H

# include <stdlib.h>
# include "libft.h"
# define GNL_BUFF_SIZE 1000
# define GNL_MALLCHECK(x) if (!(x)) return (-1);

typedef unsigned char		t_uc;


//typedef struct		s_line
//{
//	t_uc			*str;
//	size_t			len;
//}					t_line;


int				ft_usgnl(int fd, char **line);
int				ft_gnl(int fd, char **line);
int				ft_gnl_v2(int fd, t_line *line, t_bool lb);


#endif
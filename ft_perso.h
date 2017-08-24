/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 13:57:58 by caroua            #+#    #+#             */
/*   Updated: 2017/08/11 14:03:59 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# include "string.h"
# define SAVE_THE_WORLD "Secret agent"

typedef struct	s_perso{
	char		*name;
	float		life;
	int			age;
	char		*profession;
}				t_perso;

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 07:45:23 by caroua            #+#    #+#             */
/*   Updated: 2017/08/11 08:43:56 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_caseinsensitive(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('A' <= str[i]) && (str[i] <= 'Z'))
		{
			str[i] = 'a' + (str[i] - 'A');
		}
		i++;
	}
	return (str);
}

int		ft_strcmp(char *search, char *to_find)
{
	int	diff;

	to_find--;
	while (*search <= ' ')
	{
		search++;
	}
	search--;
	while (*(search + 1) != '\0' && *(to_find + 1) != '\0' \
			&& *(search + 1) == *(to_find + 1))
	{
		search++;
		to_find++;
	}
	search++;
	to_find++;
	if (*search == '\0' || *to_find == '\0')
	{
		diff = *search - *to_find;
	}
	else
	{
		diff = -1;
	}
	return (diff);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_alert(char **argv, int i)
{
	int	threat;

	threat = 0;
	ft_caseinsensitive(argv[i]);
	if (ft_strcmp(argv[i], "president") >= 0)
	{
		threat = 1;
	}
	if (ft_strcmp(argv[i], "attack") >= 0)
	{
		threat = 1;
	}
	if (ft_strcmp(argv[i], "powers") >= 0)
	{
		threat = 1;
	}
	return (threat);
}

int		main(int argc, char **argv)
{
	int	i;
	int	threat;

	i = 1;
	threat = 0;
	while (i < argc && threat == 0)
	{
		threat = ft_alert(argv, i);
		i++;
	}
	if (threat >= 1)
	{
		ft_putstr("Alert!!!\n");
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:19:35 by caroua            #+#    #+#             */
/*   Updated: 2017/08/10 22:10:48 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	find_rot(char c)
{
	int i;

	i = 0;
	while (i < 42)
	{
		if (c == 'Z')
		{
			c = 'A';
		}
		else if (c == 'z')
		{
			c = 'a';
		}
		else
		{
			c++;
		}
		i++;
	}
	return (c);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') \
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = find_rot(str[i]);
		}
		i++;
	}
	return (str);
}
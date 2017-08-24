/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 18:44:25 by caroua            #+#    #+#             */
/*   Updated: 2017/08/10 18:51:55 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour < 1)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("12.00 A.M. AND 1.00 A.M.\n");
	}
	if (hour >= 1 && hour < 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, (hour + 1));
	}
	if (hour >= 12 && hour < 13)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("12.00 P.M. AND 1.00 P.M.\n");
	}
	if (hour >= 13 && hour < 24)
	{
		hour = hour - 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour, (hour + 1));
	}
}

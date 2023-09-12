/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaesteve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:05:46 by gaesteve          #+#    #+#             */
/*   Updated: 2023/09/04 10:45:43 by gaesteve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	j;

	j = nb;
	if (j <= 0)
	{
		return (0);
	}
	if (j == 1)
	{
		return (1);
	}
	i = 2;
	if (j >= 2)
	{
		while (i * i <= j)
		{
			if (i * i == j)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("sqrt de %d est %d\n", 10, ft_sqrt(10));
	printf("sqrt de %d est %d\n", 6, ft_sqrt(6));
	printf("sqrt de %d est %d\n", 0, ft_sqrt(0));
	printf("sqrt de %d est %d\n", 100, ft_sqrt(100));
	printf("sqrt de %d est %d\n", 2000, ft_sqrt(2000));
	printf("sqrt de %d est %d\n", 550, ft_sqrt(550));
}
*/

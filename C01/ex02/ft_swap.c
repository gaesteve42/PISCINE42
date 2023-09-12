/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaesteve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:31:22 by gaesteve          #+#    #+#             */
/*   Updated: 2023/08/28 17:47:38 by gaesteve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temporaire;

	temporaire = *a;
	*a = *b;
	*b = temporaire;
}

int	main(void)
{
	int	a;
	int	b;

	a = 3000;
	b = 1500;
	ft_swap(&a, &b);
	printf("%d:%d", a, b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaesteve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:22:09 by gaesteve          #+#    #+#             */
/*   Updated: 2023/08/31 13:18:17 by gaesteve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (av[0][i] && ac)
	{
		ft_putchar(av[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

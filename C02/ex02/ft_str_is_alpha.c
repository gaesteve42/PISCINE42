/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaesteve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:49:42 by gaesteve          #+#    #+#             */
/*   Updated: 2023/08/28 10:02:40 by gaesteve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= 'A') && (str[i]) <= 'Z')
			|| ((str[i] >= 'a' && str[i] <= 'z')))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_alpha("ant*ineestvraimentBEAU"));
}
*/

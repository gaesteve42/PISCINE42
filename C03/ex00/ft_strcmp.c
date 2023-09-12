/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaesteve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:03:54 by gaesteve          #+#    #+#             */
/*   Updated: 2023/08/30 16:42:31 by gaesteve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);// '-' calcule la diff numerique entre les codes ASCII.
	//on return la diff des deux chaines.
}
/*
int	main(void)
{
	printf("%d\n", ft_strcmp("Compare", "Compare50"));
	printf("%d", ft_strcmp("salutmec", "salut"));
}
*/
/*
strcmp() retourne un entier indiquant le résultat de la comparaison comme suit : • 0 si s1 et s2 sont égales ; • une valeur négative si s1 est inférieure à s2 ;
*/

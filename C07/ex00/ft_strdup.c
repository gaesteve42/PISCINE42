/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaesteve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:57:54 by gaesteve          #+#    #+#             */
/*   Updated: 2023/09/07 10:21:16 by gaesteve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*duplicate;

	duplicate = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (duplicate == NULL)
		return (NULL);
	ft_strcpy(duplicate, src);
	return (duplicate);
}
/*
int	main(void)
{	
	printf("%d\n", ft_strlen("123456"));
	printf("%s\n", strcmp(strdup("Test"), ft_strdup("Test")) == 0 ?
			"OK" :
			"Fail");
	printf("%s\n", strcmp(strdup("16jj44nj"), ft_strdup("16jj44nj")) == 0 ?
			"OK" :
			"FAIL");
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaesteve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:27:37 by gaesteve          #+#    #+#             */
/*   Updated: 2023/09/07 11:24:01 by gaesteve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	int		lensep;
	char	*str;

	i = 0;
	len = 0;
	if (size == 0)
		return (malloc(sizeof(char)));
	lensep = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	str = malloc(sizeof(char) * (len + lensep + 1));
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i != size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	char *str = ft_strjoin(argc, argv, "___");
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  str);
	free(str);
	
}
*/

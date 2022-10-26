/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:39:55 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/19 22:40:51 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> 

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	str_2d_len(char **strs, int size)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			total += 1;
		i++;
	}
	return (total);
}

char	*ft_strcat(char *dest, char *src, int count, int end)
{
	int	i;
	int	dest_length;

	i = 0;
	dest_length = str_len(dest);
	while (src[i])
	{	
		dest[dest_length + i] = src[i];
		i++;
	}
	if (count < end)
		dest[dest_length + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*str;

	i = 0;
	if (size == 0)
		total_len = 1;
	else
		total_len = str_2d_len(strs, size) + str_len(sep) * (size - 1) + 1;
	str = (char *) malloc (total_len * sizeof(char));
	while (i < size)
	{
		str = ft_strcat(str, strs[i], i, size);
		if (i < size - 1)
			str = ft_strcat(str, sep, i, size);
		i++;
	}
	return (str);
}

int	main(void)
{
	char	*tab[4];
	tab[0] = "Salut";
	tab[1] = "ma";
	tab[2] = "belle";
	tab[3] = "!";
	printf("%s", ft_strjoin(4, tab, "--"));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:48:22 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/16 11:29:54 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	arr_len(int *array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

int	ft_size(int min, int max)
{
	int	size;

	size = min - max;
	if (size < 0)
		size *= -1;
	return (size);
}

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	i = 0;
	size = ft_size(min, max);
	arr = (int *) malloc (size * sizeof(int));
	if (arr == NULL || min >= max)
		return ('\0');
	while (i < size)
	{
		arr[i] = min + i++;
	}
	return (arr);
}

// int main(void)
// {
//     int i;
//     int *arr;
//     int size;
//     int min;
//     int max;

//     i = 0;
//     min = -2;
//     max = 5;
//     arr = ft_range(min, max);
//     size = ft_size(min, max);
//     if (arr == 0)
//         return (0);
//     while (i < size)
//     {
//         printf("%d ", arr[i]);
//         i++;
//     }
//     free (arr);
//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:44:40 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/19 15:12:44 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> 

int	ft_size(int min, int max)
{
	int	size;

	size = min - max;
	if (size < 0)
		size *= -1;
	return (size);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tbl;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}	
	size = ft_size(min, max);
	tbl = (int *) malloc (size * sizeof(int));
	if (tbl == NULL)
		return (-1);
	while (i < size)
	{
		tbl[i] = min + i;
		i++;
	}
	*range = tbl;
	return (size);
}

// int main(void)
// {
// 	int **arr;
// 	int size;
// 	int min;
// 	int max;
// 	int *tab;

// 	min = -2;
// 	max = 4;
// 	arr = &tab;
// 	size = ft_ultimate_range(arr, min, max);
// 	if (*arr == NULL)
// 		return (0);
// 	printf("%d\n", size);
// 	//free (arr);
// 	return (0);
// }

// [2][4] = {
//         {10, 11, 12, 13},
//         {14, 15, 16, 17}
//     };

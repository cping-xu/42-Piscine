/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cping-xu <cping-xu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:17:23 by cping-xu          #+#    #+#             */
/*   Updated: 2022/09/03 14:50:43 by cping-xu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*x;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	x = malloc((max - min) * sizeof(int) + 1);
	if (!(x))
	{
		return (-1);
	}
	*range = x;
	i = 0;
	while (i < max - min)
	{
		x[i] = min + i;
		i++;
	}
	return (max - min);
}

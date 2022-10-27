/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cping-xu <cping-xu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:09:33 by cping-xu          #+#    #+#             */
/*   Updated: 2022/08/25 21:55:53 by cping-xu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb > 1)
	{
		while (nb != 1)
		{
			i = nb * i;
			nb--;
		}
		return (i);
	}
	return (0);
}

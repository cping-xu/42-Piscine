/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cping-xu <cping-xu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:42:27 by cping-xu          #+#    #+#             */
/*   Updated: 2022/08/22 22:53:40 by cping-xu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlength(str);
	if (size == 0)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 122)
		{
			return (0);
		}
		else if (str[i] >= 91 && str[i] <= 96)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cping-xu <cping-xu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:39:40 by cping-xu          #+#    #+#             */
/*   Updated: 2022/09/06 13:14:50 by cping-xu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			j = 1;
			while (j < ac - 1)
			{
				k = j + 1;
				if (ft_strcmp(av[j], av[k]) > 0)
					ft_swap(&av[j], &av[k]);
				else
					j++;
			}
			i++;
		}
	}
	i = 0;
	while (++i < ac)
		ft_putstr(av[i]);
}

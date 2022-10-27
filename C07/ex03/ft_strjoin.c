/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cping-xu <cping-xu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:50:51 by cping-xu          #+#    #+#             */
/*   Updated: 2022/09/08 18:04:23 by cping-xu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_joinlen(int size, char *str, char *sep)
{
	int	i;
	int	l;

	l = 0;
	i = 0;
	while (i < size)
	{
		l = l + ft_strlen(str) + ft_strlen(sep);
		i++;
	}
	return (l);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(s2);
	while (s1[j] != '\0')
	{
		s2[i] = s1[j];
		j++;
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;
	int		len;

	len = ft_joinlen(size, *strs, sep);
	dest = (char *)malloc((len - ft_strlen(sep) + 1) * sizeof(char));
	if (!(dest))
		return (NULL);
	dest[0] = '\0';
	i = 1;
	while (i < size)
	{
		ft_strcpy(strs[i], dest);
		if (i < size - 1)
			ft_strcpy(sep, dest);
		i++;
	}
	dest[ft_strlen(dest) - 1] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(int ac, char **av)
{
	av[0] = "Fdsdsf";
	av[1] = "f123213231";
	char	c[] = "haha";
	(void) ac;

	printf("%s\n", ft_strjoin(5, av, c));
}*/

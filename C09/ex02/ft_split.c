/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cping-xu <cping-xu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:14:37 by cping-xu          #+#    #+#             */
/*   Updated: 2022/11/11 11:29:20 by cping-xu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_c(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_str(char *str, char *charset)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_c(str[i], charset))
			i++;
		if (str[i] != '\0')
			c++;
		while (str[i] != '\0' && !check_c(str[i], charset))
			i++;
	}
	return (c);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_c(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		wlen;
	int		i;
	char	*dest;

	i = 0;
	wlen = ft_strlen(str, charset);
	dest = (char *)malloc(sizeof(char) * (wlen + 1));
	while (i < wlen)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *) * (count_str(str, charset)
				+ 1));
	while (*str != '\0')
	{
		while (*str != '\0' && check_c(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !check_c(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}

/*#include <stdio.h>
char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	argv[0] = "000fn000f000n000n00f";
	argv[1] = "fn";
	char **p = ft_split(argv[0], argv[1]);
	int i = -1;
	while (++i < 6)
	{
		printf("%s\n",p[i]);
	}
	return (0);
}*/

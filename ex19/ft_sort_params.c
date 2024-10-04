/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:37:08 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/16 10:21:53 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
		r = s1[i] - s2[i];
	return (r);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	r;

	j = 0;
	while (++j < argc)
	{
		i = j + 1;
		while (i < argc)
		{
			r = ft_strcmp(argv[j], argv[i]);
			if (r > 0)
				ft_swap(&argv[j], &argv[i]);
			i++;

		}
	}
	j = 0;
	while (++j < argc)
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
	}
	return (0);
}

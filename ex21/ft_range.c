/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:44:38 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/14 17:23:39 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*mal;
	int	resta;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	resta = max - min;
	mal = malloc((resta) * sizeof(int));
	while (i < resta)
	{
		mal[i] = min + i;
		i++;
	}
	return (mal);
}
/*
int main(void)
{
	int	*bof;
	int	i;
	int	ma = 5;
	int	mi = -2;

	i = 0;

	bof = ft_range(mi, ma);
	while(i < ma - mi)
	{
		printf("%d\n", bof[i]);
		i++;
	}
	free(bof);
	return (0);
}*/

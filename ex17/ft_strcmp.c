/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:44:39 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/11 17:09:40 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
		r = s1[i] - s2[i];
	return (r);
}
/*
int main (void)
{
	char *s1 = "hola";
	char *s2 = "hola";

	int 	r;
	r = ft_strcmp(s1, s2);
	printf("%i\n", r);
	return (0);
}*/

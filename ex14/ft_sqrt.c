/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:03:20 by aguinea           #+#    #+#             */
/*   Updated: 2024/09/14 17:21:16 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	a = 0;
	if (nb <= 0)
		return (0);
	while (a * a < nb)
	{
		a++;
		if (a * a == nb)
			return (a);
	}
	return (0);
}

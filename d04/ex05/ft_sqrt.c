/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoiseye <mirror12k@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 13:56:42 by nmoiseye          #+#    #+#             */
/*   Updated: 2017/01/14 12:53:17 by nmoiseye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= 46340)
		if (i * i == nb)
			return (i);
		else
			i++;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:48:36 by nafarid           #+#    #+#             */
/*   Updated: 2024/09/15 13:02:12 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(5));
}*/

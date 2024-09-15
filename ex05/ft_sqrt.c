/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nafarid <nafarid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:48:53 by nafarid           #+#    #+#             */
/*   Updated: 2024/09/14 21:57:40 by nafarid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	i = 2;
	if (nb >= 2)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	printf("sqrt of %d = %d\n", 9, ft_sqrt(9));
	printf("sqrt of %d = %d\n", -9, ft_sqrt(-9));
	printf("sqrt of %d = %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d = %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d = %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d = %d\n", 1454436, ft_sqrt(1454436));
}*/

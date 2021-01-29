/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <iderighe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 10:04:38 by iderighe          #+#    #+#             */
/*   Updated: 2020/10/01 11:06:26 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int x)
{
	int a;

		a = x % 10 + 48;
		ft_putchar(a);
}

void	ft_print_combn(int n)
{
	int i;
	int j;

	if (n < 1 || n > 9)
	{
		write(1, &"n doit etre compris entre 1 et 9.\n", 34);
	}
	else
	{
		j = 0;
		while (j <= 9)
		{
			i = 1;
			while (i <= n)
			{
				ft_putnbr(j);
				i++;
			}
			j++;
		}
	}
}

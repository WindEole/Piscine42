/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 09:15:10 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/17 18:11:53 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int ia, int ib)
{
	char a1;
	char a2;
	char b1;
	char b2;

	a1 = ia / 10 + 48;
	a2 = ia % 10 + 48;
	b1 = ib / 10 + 48;
	b2 = ib % 10 + 48;
	if (ia != ib && ia < ib)
	{
		write(1, &a1, 1);
		write(1, &a2, 1);
		write(1, &" ", 1);
		write(1, &b1, 1);
		write(1, &b2, 1);
		if (ia != 98)
		{
			write(1, &", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	int ia;
	int ib;

	ia = 0;
	while (ia <= 99)
	{
		ib = 0;
		while (ib <= 99)
		{
			ft_putchar(ia, ib);
			ib = ib + 1;
		}
		ia = ia + 1;
	}
}

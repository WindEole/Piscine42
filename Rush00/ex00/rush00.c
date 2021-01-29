/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 11:59:56 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/13 12:25:39 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char m);

void	ft_length(int x)
{
	int compteur;
	
	if (x < 0)
	{
		x = -x;
	}
	compteur = 2;
	ft_putchar('o');
	while (compteur < x && x > 1)
	{
		ft_putchar('-');
		compteur++;
	}
	if (x != 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_height(int x, int y)
{
	int compteur;

	if (y < 0 )
	{
		y = -y;
	}
	if (x < 0 )
	{
		x = -x;
	}
	compteur = 2;
	if (y != 1)
	{
		while ((y - 2) > 0)
		{
			ft_putchar('|');
			while (compteur < x && x > 1)
			{
				ft_putchar(' ');
				compteur++;
				if (compteur == x)
				{
					ft_putchar('|');
				}
			}
			ft_putchar('\n');
			compteur = 2;
			y--;
		}
		ft_length(x);
	}
}

void	rush(int x, int y)
{
	ft_length(x);
	ft_height(x, y);
}

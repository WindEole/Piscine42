/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 18:33:39 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/25 14:15:03 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dec_to_hex(unsigned int temp)
{
	char	*tab;

	tab = "0123456789abcdef";
	ft_putchar(tab[temp / 16]);
	ft_putchar(tab[temp % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned int	temp;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		temp = c;
		if (c > 31 && c < 127)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar('\\');
			ft_dec_to_hex(temp);
		}
		i++;
	}
}

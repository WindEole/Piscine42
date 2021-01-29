/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 15:28:49 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/30 14:46:12 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int		ft_atoi(char *str)
{
	int	i;
	int minus;
	int res;

	i = 0;
	minus = 1;
	res = 0;
	if (str[i] == '-')
		minus = (-1) * minus;
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - 48);
		i++;	
	}
	res = minus * res;
	return (res);
}

int		main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	char *base;
	int nbr;
	   
	base = argv[1];
	nbr = ft_atoi(argv[2]);
//	printf("%d\n", ft_putnbr_base(nbr, base));
	return (0);	
}

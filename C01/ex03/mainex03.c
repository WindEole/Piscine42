/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 12:09:20 by iderighe          #+#    #+#             */
/*   Updated: 2020/10/01 12:21:19 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int*mod);

int		main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 26;
	b = 5;
	printf("%d\n", ft_div_mod(a, b, div, mod));
	return (0);
}

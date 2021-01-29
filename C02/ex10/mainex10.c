/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex10.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 11:56:02 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/28 16:09:33 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[] = "Necrono";
	char src[] = "micon";
	unsigned int size;

	size = 3;

	printf("%u \n", ft_strlcpy(dest, src, size));
	printf("%lu", strlcpy(dest, src, size));
	return (0);
}


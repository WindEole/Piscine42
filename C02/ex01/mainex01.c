/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 09:44:13 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/21 10:02:29 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	unsigned int n;
	char dest[] = "Necrono";
	char src[] = "micon";

	n = 5;
	printf("%s \n", ft_strncpy(dest, src, n));
	return 0;
}

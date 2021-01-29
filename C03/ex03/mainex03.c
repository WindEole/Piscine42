/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:03:31 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/24 10:25:52 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char dest[5] = "Anti";
	char src[19] = "gone with the wind";
	unsigned int nb;

	nb = 4;
	printf("%s \n", dest);
	printf("%s \n", src);
	printf("%s \n", ft_strncat(dest, src, nb));
	return (0);
}

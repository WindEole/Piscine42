/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 19:04:18 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/24 11:19:41 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[20] = "Necrono";
	char src[] = "micon";

	printf("%s \n", dest);
	printf("%s \n", src);
//	printf("%s ", strcat(dest, src));
	printf("%s \n", ft_strcat(dest, src));
	return (0);
}

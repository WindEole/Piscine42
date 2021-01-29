/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 09:38:07 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/21 09:24:47 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char dest[] = "Hello";
	char src[] = "World";

	printf("%s \n", ft_strcpy(dest, src));
	return 0;
}

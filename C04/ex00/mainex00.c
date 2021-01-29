/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 17:57:02 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/24 18:05:01 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int		main(void)
{
	char str[] = "Salut, ca va?";
	
	printf("%lu \n", strlen(str));
	printf("%i \n", ft_strlen(str));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 18:45:18 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/30 10:17:03 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char s1[] = "Bonjour, ca va?";
	char s2[] = "BonJour";

	unsigned int n;

	n = 5;
	printf("%d \n", strncmp(s1, s2, n));
	printf("%d \n", ft_strncmp(s1, s2, n));
	return (0);
}

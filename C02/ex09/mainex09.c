/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex09.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:21:03 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/24 16:00:50 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str[] = "Salut, coMm[ent tU vas ? 42Mots q]uarAnte-deUx; Cinquante+et+uN";

	printf("%s \n", ft_strcapitalize(str));
	return (0);
}

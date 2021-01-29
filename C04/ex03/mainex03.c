/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:28:52 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/25 14:26:50 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
//	char str[] = "   ---+--+1234ab567";
//	char str[] = "-7gfdgd";
	char *str = argv[1];
	
//	atoi(str);
	printf("%i \n", atoi(str));
	printf("%i \n", ft_atoi(str));
	
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex11.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 18:30:26 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/25 14:06:01 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

//int		main(int argc, char **argv)
//{
//	(void) argc;
//	(void) argv;

//	char *str = argv[1];

int		main(void)
{
	char str[] = "Coucou !\nTu vas bien ?\n";
//	char str[] = "\n\v\t\e\r\f\b\a\0";

//	printf("%s \n", str);
	ft_putstr_non_printable(str);
	return (0);
}

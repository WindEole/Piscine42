/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 11:13:55 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/19 11:28:44 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int stop;
	int c;

	stop = 0;
	while (stop < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				c = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = c;
			}
			i++;
		}
		stop++;
	}
}

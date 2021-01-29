/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_generator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 15:52:14 by bmerchin          #+#    #+#             */
/*   Updated: 2020/09/21 09:16:12 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_line_right(char *data_lign, char right)
{
	int		i;
	char	numbers_buildings;
	char	max_size;

	numbers_buildings = '1';
	max_size = data_lign[3];
	i = 2;
	while (i >= 0)
	{
		if (data_lign[i] > max_size)
		{
			numbers_buildings++;
			max_size = data_lign[i];
		}
		i--;
	}
	if (numbers_buildings != right)
		return (0);
	return (1);
}

int		ft_check_line_left(char *data_lign, char left)
{
	int		i;
	char	numbers_buildings;
	char	max_size;

	i = 1;
	numbers_buildings = '1';
	max_size = data_lign[0];
	while (i < 4)
	{
		if (data_lign[i] > max_size)
		{
			max_size = data_lign[i];
			numbers_buildings++;
		}
		i++;
	}
	if (numbers_buildings != left)
		return (0);
	return (1);
}

int		ft_check_line(char *data_lign, char left, char right)
{
	if (!ft_check_line_left(data_lign, left))
		return (0);
	if (!ft_check_line_right(data_lign, right))
		return (0);
	return (1);
}

int		ft_check_column_case(char **tab, int column)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = i + 1;
		while (j < 4)
		{
			if (tab[i][column] == tab[j][column])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_final_check_column_top(char **tab, char top, int column)
{
	int		i;
	char	numbers_buildings;
	char	max_size;

	i = 1;
	numbers_buildings = '1';
	max_size = tab[0][column];
	while (i < 4)
	{
		if (tab[i][column] > max_size)
		{
			max_size = tab[i][column];
			numbers_buildings++;
		}
		i++;
	}
	if (numbers_buildings != top)
		return (0);
	return (1);
}

int		ft_final_check_column_down(char **tab, char down, int column)
{
	int		i;
	char	numbers_buildings;
	char	max_size;

	numbers_buildings = '1';
	max_size = tab[3][column];
	i = 2;
	while (i >= 0)
	{
		if (tab[i][column] > max_size)
		{
			numbers_buildings++;
			max_size = tab[i][column];
		}
		i--;
	}
	if (numbers_buildings != down)
		return (0);
	return (1);
}

int		ft_final_check(char **tab, char **data)
{
	int column;

	column = 0;
	while (column < 4)
	{
		if (!ft_check_column_case(tab, column))
			return (0);
		if (!ft_final_check_column_down(tab, data[1][column], column))
			return (0);
		if (!ft_final_check_column_top(tab, data[0][column], column))
			return (0);
		column++;
	}
	return (1);
}

void	ft_option(char **data)
{
	ft_strcpy(data[4], "1234");
	ft_strcpy(data[5], "1243");
	ft_strcpy(data[6], "1324");
	ft_strcpy(data[7], "1342");
	ft_strcpy(data[8], "1423");
	ft_strcpy(data[9], "1432");
	ft_strcpy(data[10], "2134");
	ft_strcpy(data[11], "2143");
	ft_strcpy(data[12], "2314");
	ft_strcpy(data[13], "2341");
	ft_strcpy(data[14], "2413");
	ft_strcpy(data[15], "2431");
	ft_strcpy(data[16], "3124");
	ft_strcpy(data[17], "3142");
	ft_strcpy(data[18], "3214");
	ft_strcpy(data[19], "3241");
	ft_strcpy(data[20], "3412");
	ft_strcpy(data[21], "3421");
	ft_strcpy(data[22], "4123");
	ft_strcpy(data[23], "4132");
	ft_strcpy(data[24], "4213");
	ft_strcpy(data[25], "4231");
	ft_strcpy(data[26], "4312");
	ft_strcpy(data[27], "4321");
}

void	ft_print(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(tab[i][j]);
			if (j != 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		ft_tab_generator(char **tab, char **data, int lign, int printed)
{
	int i;

	i = 4;
	while (i < 28)
	{
		if (ft_check_line(data[i], data[2][lign], data[3][lign]))
		{
			ft_strcpy(tab[lign], data[i]);
			if (lign < 3)
				ft_tab_generator(tab, data, lign + 1, printed);
			else if (ft_final_check(tab, data) && printed == 0)
			{
				ft_print(tab);
				printed += 1;
			}
		}
		i++;
	}
	return (printed);
}

int		ft_security(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (!(str[i] >= '1' && str[i] <= '4'))
				return (0);
		}
		else
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

void	ft_av_to_data(char **data, char *str)
{
	int i;

	i = 0;
	while (i < 4)
	{
		data[i][0] = str[(i * 8)];
		data[i][1] = str[(i * 8) + 2];
		data[i][2] = str[(i * 8) + 4];
		data[i][3] = str[(i * 8) + 6];
		data[i][4] = '\0';
		i++;
	}
	ft_option(data);
}

char	**ft_malloc(char **tab, int line, int column)
{
	int i;

	if (!(tab = (char**)(malloc(sizeof(char*) * line))))
		return (0);
	i = 0;
	while (i < line)
	{
		if (!(tab[i] = (char*)(malloc(sizeof(char) * column))))
			return (0);
		i++;
	}
	return (tab);
}

void	ft_free_malloc(char **tab, int line)
{
	int i;

	i = 0;
	while (i < line)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int		main(int ac, char **av)
{
	char **tab;
	char **data;

	tab = 0;
	data = 0;
	if (ac != 2 || !ft_security(av[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	tab = ft_malloc(tab, 4, 5);
	data = ft_malloc(data, 28, 5);
	if (tab == 0)
		return (0);
	if (data == 0)
		return (0);
	ft_av_to_data(data, av[1]);
	if (ft_tab_generator(tab, data, 0, 0))
		write(1, "Error\n", 6);
	ft_free_malloc(data, 28);
	ft_free_malloc(tab, 4);
	return (0);
}

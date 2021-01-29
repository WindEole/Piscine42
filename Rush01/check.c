/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 12:11:02 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/20 12:12:45 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_check_line(char *tab,char left, char  right) 
{
	int j;
	char  numbers_buildings;
	char max_size;

	j = 1;
	numbers_buildings ='1';
	max_size = tab[0];
    while (j <= 3)
	{
		if (tab[j] > max_size)
		{
			max_size = tab[j];
			numbers_buildings++;
		}
		j++;
	}

	if (numbers_buildings != left)
		return(0);
	numbers_buildings ='1';
	max_size = tab[3];
	j = 2;	
	while (j >= 0)
	{
		if (tab[j] > max_size)
		{
			numbers_buildings++;
			max_size =tab[j];
		}
		j--;
	}
	if (numbers_buildings!= right)
		return(0);
	return(1);
}

int final_check(char **tab,int column,char top, char down) 
{

	int i;
	char numbers_buildings;
	char max_size;
	
	i=1;
	numbers_buildings = '1';
	max_size = tab[0][column];
    while (i <= 3)
	{
		if (tab[i][column] > max_size)
		{	
			max_size = tab[i][column];
			numbers_buildings++;
		}
		i++;
	}
	if (numbers_buildings != top)
		return(0);
	numbers_buildings ='1';
	max_size = tab[3][column];
	i = 2;	
	while (i >= 0)
	{
		if (tab[i][column] > max_size)	
		{
			numbers_buildings++;
			max_size =tab[i][column];
		}
		i--;
	}
	if (numbers_buildings!= down)
		return(0);
	return(1);
}

char *ft_data_new_chain(char *data,char *new_chain)
{
	int i;

	i=0;
	while (i < 4)
	{
		new_chain[i] = *data;
		data++;
		data++;
		i++;
	}
	new_chain[i] = '\0';
}
/*void ft_data(char *up,char *down, char *left, char *right, char *data)
{
	char *chaine;
	chaine = data;

	chaine = ft_data_new_chain(down,chaine);
	chaine = ft_data_new_chain(left,chaine);
	chaine = ft_data_new_chain(right,chaine);
}*/
int main(int argc, char **argv)
{
	char *new;
	char tab[4]="1234";
//	printf("%d",ft_check_line(tab,'4','1'));
	char **tabb;
	tabb=(char**)malloc(sizeof(char*)*4);
	
	tabb[0]="1234";
	tabb[1]="2341";
	tabb[2]="3412";
	tabb[3]="4123";
//	printf("%c",tabb[0][1]);
//	printf("%s",tabb[1]);
//	printf("%d",final_check(tabb,3,'5','2'));
	char up[5];

	ft_data_new_chain(up,argv[1]);
	printf("%s",up);

}

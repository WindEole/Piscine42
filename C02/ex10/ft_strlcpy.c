/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iderighe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 11:59:12 by iderighe          #+#    #+#             */
/*   Updated: 2020/09/28 17:30:58 by iderighe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	long			i;
	unsigned int	srclen;

	i = 0;
	srclen = 0;
	if (size != 0)
	{
		while (i != (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	return (srclen);
}

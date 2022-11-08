/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:35:12 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/08 16:41:33 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_memcpy.c"
#include"../ft_memmove.c"
#include <stdio.h>
#include <string.h>

void	ft_printarray(char *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%c, ", tab[i]);
		i++;
	}
	printf("\n");
}

void	ft_restab(char *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		tab[i] = 'i';
		i++;
	}
}

void	ft_restab2(char *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		tab[i] = 5 + 'i';
		i++;
	}
}

int	main(int argc, char **argv)
{
	char		connard[5];
	char		salopiaud[5];
	size_t		size;

	ft_restab(connard, 5);
	ft_restab2(salopiaud, 5);
	ft_printarray(connard, 5);
	ft_printarray(salopiaud, 5);
	size = sizeof(int) * 5;
	if (argc != 2)
	{
		printf("Problems.\n");
		return (1);
	}
	printf("\n");
	ft_memcpy(connard, salopiaud, sizeof(char) * 5);
	ft_printarray(connard, 5);
	ft_restab(connard, 5);
	memcpy(salopiaud, connard, sizeof(char) * 5);
	ft_printarray(salopiaud, 5);
	ft_restab(connard, 5);
	ft_restab2(salopiaud, 5);
	printf("\n");
	ft_memmove(connard, salopiaud, sizeof(char) * 5);
	ft_printarray(connard, 5);
	ft_restab(connard, 5);
	memmove(salopiaud, connard, sizeof(char) * 5);
	ft_printarray(salopiaud, 5);
	ft_restab(connard, 5);
	ft_restab2(salopiaud, 5);
	return (0);
}

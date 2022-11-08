/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:35:12 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/08 16:16:03 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_strlen.c"
#include"../ft_memset.c"
#include"../ft_bzero.c"
#include"../ft_memcpy.c"
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

void	ft_printarrayint(int *tab, int size)
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

int	main(int argc, char **argv)
{
	char		connard[] = {'1', '2', '3', '4', '5'};
	char		salopiaud[] = {'1', '2', '3', '4', '5'};
	int			chemapan[] = {1, 2, 3, 4, 5};
	int			mechantpasgentil[] = {1, 2, 3, 4, 5};
	char		mechanttresmechant[] = {'1', '2', '3', '4', '5'};
	char		mechantpasbeau[] = {'5', '6', '7', '8', '9'};
	size_t		size;

	size = sizeof(int) * 5;
	if (argc != 2)
	{
		printf("Problems.\n");
		return (1);
	}
	ft_printarray(connard, 5);
	printf("%ld\n", ft_strlen(argv[1]));
	printf("%ld\n", strlen(argv[1]));
	ft_memset(connard, '3', sizeof(char) * 5);
	ft_printarray(connard, 5);
	memset(salopiaud, '3', sizeof(char) * 5);
	ft_printarray(salopiaud, 5);
	ft_bzero(chemapan, size);
	ft_printarrayint(chemapan, 5);
	bzero(mechantpasgentil, size);
	ft_printarrayint(mechantpasgentil, 5);
	printf("\n");
	ft_memcpy(mechanttresmechant, mechantpasbeau, sizeof(char) * 5);
	ft_printarray(mechanttresmechant, 5);
	memcpy(mechantpasbeau, connard, sizeof(char) * 5);
	ft_printarray(mechantpasbeau, 5);
	return (0);
}

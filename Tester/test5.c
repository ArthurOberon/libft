/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:35:12 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/10 08:40:31 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_memchr.c"
#include"../ft_memcmp.c"
#include"../ft_strnstr.c"
#include"../ft_atoi.c"
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

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

int	main(int argc, char **argv)
{
	char	*string;
	char	*string2;

	string = "patate";
	string2 = "atat";
	printf("%s\n", (char *)ft_memchr(string, 'a', 6));
	printf("%s\n", (char *)memchr(string, 'a', 6));
	printf("%d\n", ft_memcmp(string, string2, 6));
	printf("%d\n", memcmp(string, string2, 6));
	printf("%s\n", ft_strnstr(string, string2, 5));
	printf("%s\n", strnstr(string, string2, 5));
	printf("\n\n");
	printf("ft_atoi : %d\n", ft_atoi(argv[1]));
	printf("atoi : %d\n", atoi(argv[1]));
	return (0);
}

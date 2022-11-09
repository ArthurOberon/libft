/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:35:12 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/09 13:15:35 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_toupper.c"
#include"../ft_tolower.c"
#include"../ft_strchr.c"
#include"../ft_strrchr.c"
#include"../ft_strncmp.c"
#include <stdio.h>
#include <ctype.h>
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

int	main(void)
{
	char	c;
	char	*string;
	char	*string2;

	c = 'a';
	string = "potate";
	string2 = "paire";
	printf("%c\n", c);
	c = ft_toupper(c);
	printf("%c\n", c);
	c = ft_tolower(c);
	printf("%c\n", c);
	printf("%s\n", ft_strchr(string, c));
	printf("%s\n", strchr(string, c));
	printf("%s\n", ft_strrchr(string, c));
	printf("%s\n", strrchr(string, c));
	printf("%d\n", ft_strncmp(string, string2, 2));
	printf("%d\n", strncmp(string, string2, 2));
	return (0);
}

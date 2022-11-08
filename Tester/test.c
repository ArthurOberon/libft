/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:35:12 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/08 17:22:36 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_strlcpy.c"
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

int	main(void)
{
	char	*src;
	char	*dest;

	src = "patate";
	dest = "coucou";
	printf("%s, %s\n", src, dest);
	t_strlcpy(dest, src, 6);
	printf("%s, %s\n", src, dest);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:35:12 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/10 10:01:25 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_calloc.c"
#include"../ft_strdup.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_printarray(char *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] == 0)
			printf("NULL,");
		else
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
		tab[i] = 'y';
		i++;
	}
}

int	main(void)
{
	char	*tab;
	char	*tab2;
	char	tab3[7];
	char	*tab4;
	char	*tab5;

	tab = ft_calloc(5, sizeof(char));
	printf("ft_calloc : %s.\n", tab);
	tab2 = calloc(5, sizeof(char));
	printf("calloc : %s.\n", tab2);
	ft_restab(tab3, 7);
	tab4 = ft_strdup((const char *)tab3);
	printf("ft_strdup : %s.\n", tab4);
	tab5 = strdup((const char *)tab3);
	printf("strdup: %s.\n", tab5);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:35:12 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/11 15:23:09 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_substr.c"
#include"../ft_strjoin.c"
#include"../ft_strtrim.c"
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
	char	*str;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str = "patate au four";
	str1 = ft_substr(str, 1, 1);
	printf("%s\n", str1);
	str1 = "patate ";
	str2 = "au four";
	str3 = ft_strjoin(str1, str2);
	printf("strjoin : %s\n", str3);
	str1 = "abapatateaba";
	printf("%s\n", str1);
	str4 = ft_strtrim(str1, "ab");
	printf("strtrim : %s\n", str4);
}

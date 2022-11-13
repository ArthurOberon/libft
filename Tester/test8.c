/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:35:12 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/13 11:41:55 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_split.c"
#include"../ft_itoa.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	**str2;
	int		i;

	i = 0;
	str = "patate au four";
	printf("%s\n", str);
	str2 = ft_split(str, 'a');
	printf("split : ");
	while (str2[i] != NULL)
	{
		printf("%s ", str2[i]);
		i++;
	}
	str = ft_itoa(2147483647);
	printf("\nitoa : %s\n", str);
	str = ft_itoa(-2147483648);
	printf("itoa : %s\n", str);
	str = ft_itoa(-1);
	printf("itoa : %s\n", str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:29:36 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/11 19:25:18 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include "stdio.h"

static size_t	ft_nbr_length(int nbr)
{
	size_t	length;

	length = 0;
	if (nbr < 0)
	{
		length++;
		nbr = -nbr;
	}
	while (nbr / 10)
	{
		length++;
		nbr = nbr / 10;
	}
	length++;
	return (length);
}

char	*ft_itoa(int n)
{
	size_t	length;
	int		sign;
	char	*result;

	sign = 1;
	length = ft_nbr_length(n);
	int length2 = length;
	if (n < 0)
		sign = -1;
	if (n == 0)
		return (ft_strdup("0"));
	result = malloc(sizeof(char) * (length + 1));
	printf("%ld\n", length + 1);
	if (!result)
		return (NULL);
	result[length--] = '\0';
	if (n < 0)
		result[0] = '-';
	while (n > 0)
	{
		result[length] = (n % 10) * sign + '0';
		n = n / 10;
		length--;
	}
	write(1, "res = ", 6);
	write(1, result, length2);
	write(1, "\n", 1);
	return (result);
}

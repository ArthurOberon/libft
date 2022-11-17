/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_to_string.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:07:07 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/17 09:55:41 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"

static size_t	ft_longueur(long nbr, size_t base_length)
{
	size_t	i;

	i = 1;
	while (nbr >= (long)base_length)
	{
		i = i * base_length;
		nbr = nbr / base_length;
	}
	return (i);
}

static int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_putnbr_base_to_string(long nbr, char *base)
{
	size_t	i;
	size_t	j;
	size_t	base_length;
	char	*result;

	j = 0;
	base_length = ft_strlen(base);
	i = ft_longueur(nbr, base_length);
	if (ft_check_base(base))
	{
		result = malloc(sizeof(char) * (i + j + 1));
		if (!result)
			return (NULL);
		if (nbr < 0)
			result[j++] = '-';
		while (i >= 1)
		{
			result[j++] = base[nbr / i];
			nbr = nbr % i;
			i = i / base_length;
		}
		result[j] = '\0';
		return (result);
	}
	return (NULL);
}

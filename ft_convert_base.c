/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:27:05 by aoberon           #+#    #+#             */
/*   Updated: 2023/01/19 13:48:26 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft	.h"

static int	ft_atoi_base(char *nbr, char *base_from)
{
	int	sign;
	int	result;
	int	base_length;

	sign = 1;
	result = 0;
	base_length = ft_strlen(base_from);
	while (ft_isspace(*nbr))
		nbr++;
	if (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	while (*nbr >= '0' && *nbr <= '9')
	{
		result = result * base_length + ft_inbase(*nbr, base_from);
		nbr++;
	}
	return (result * sign);
}

static int	ft_putnbr_base(int nbr, char *result, char *base, int i)
{
	size_t			base_length;
	unsigned int	nbr_converted;

	nbr_converted = nbr;
	base_length = ft_strlen(base);
	if (nbr < 0)
	{
		result[0] = '-';
		nbr_converted = nbr * -1;
	}
	if (nbr_converted >= base_length)
		ft_putnbr_base(nbr_converted / base_length, result, base, i - 1);
	result[i] = base[nbr_converted % base_length];
	return (i);
}

static int	ft_number_length(int nbr, int base_length)
{
	int	length;

	length = 0;
	if (nbr < 0)
	{
		length++;
		nbr *= -1;
	}
	while (nbr >= base_length)
	{
		length++;
		nbr /= base_length;
	}
	return (++length);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		base_to_length;
	int		result_length;
	int		number;
	int		i;

	i = 0;
	if (!nbr || !base_from || !base_to)
		return (NULL);
	base_to_length = ft_strlen(base_to);
	number = ft_atoi_base(nbr, base_from);
	result_length = ft_number_length(number, base_to_length);
	result = malloc(sizeof(char) * result_length + 1);
	i = ft_putnbr_base(number, result, base_to, result_length - 1);
	result[i + 1] = '\0';
	return (result);
}

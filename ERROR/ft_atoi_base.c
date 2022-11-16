/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:29:49 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/16 20:20:06 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if ((base[i] < 32 || base[i] > 126) || ft_isspace(base[i])
			|| base[i] == '+' || base[i] == '-')
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

static int	ft_find_keeper(char c, char *base)
{
	size_t	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

static int	ft_check_presence(char c, char *base)
{
	size_t	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_converter(char *str, char *base, size_t base_length)
{
	int	result;

	result = 0;
	while (*str && ft_check_presence(*str, base))
	{
		result *= base_length;
		result += ft_find_keeper(*str, base);
		str++;
	}
	return (result);
}

long	ft_atoi_base(char *str, char *base)
{
	int			sign;
	long		result;
	size_t		base_length;

	sign = 1;
	result = 0;
	if (ft_check_base(base))
	{
		while (ft_isspace(*str))
			str++;
		if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign *= -1;
			str++;
		}
		base_length = ft_strlen(base);
		result = ft_converter(str, base, base_length);
		return (result * sign);
	}
	return (0);
}

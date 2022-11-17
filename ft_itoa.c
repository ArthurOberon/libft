/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:29:36 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/17 14:20:33 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	ft_addchar(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != 1)
		i++;
	if (str[i])
		str[i] = c;
	else
		str[i] = '\0';
}

static void	ft_itoa_recursive(unsigned int n, char	*str)
{
	if (n < 10)
		ft_addchar(n + '0', str);
	else
	{
		ft_itoa_recursive(n / 10, str);
		ft_itoa_recursive(n % 10, str);
	}
}

static char	*ft_initstr(long n)
{
	unsigned int	tmp;
	char			*str;
	size_t			size;

	if (n < 0)
		tmp = -n;
	else
		tmp = n;
	size = (ft_nbrlen(tmp) + (n < 0));
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_memset(str, 1, size);
	str[size] = '\0';
	return (str);
}

char	*ft_itoa(long n)
{
	char	*result;

	result = ft_initstr(n);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		ft_addchar('-', result);
		if (n < -9)
			ft_itoa_recursive(n / -10, result);
		ft_addchar(-(n % 10) + '0', result);
	}
	else
		ft_itoa_recursive(n, result);
	return (result);
}

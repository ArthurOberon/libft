/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:12:23 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/15 20:44:05 by aoberon          ###   ########.fr       */
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

void	ft_putnbr_base_fd(unsigned int nbr, char *base, int fd)
{
	size_t		base_length;
	long		nbr_converted;

	nbr_converted = (long)nbr;
	base_length = ft_strlen(base);
	if (base_length <= 1)
		return ;
	if (ft_check_base(base))
	{
		if (nbr_converted < 0)
		{
			ft_putchar_fd('-', fd);
			nbr_converted = -nbr_converted;
		}
		if (nbr_converted >= base_length)
			ft_putnbr_base_fd(nbr_converted / base_length, base, fd);
		ft_putchar_fd(base[nbr_converted % base], fd);
	}
}

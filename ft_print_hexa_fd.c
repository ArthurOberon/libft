/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:34:46 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/15 20:34:51 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_print_hexa_fd(unsigned char *adr, int fd)
{
	char	hexa;
	int		i;

	hexa = "0123456789abcdef";
	i = 0;
	while (adr[i])
	{
		ft_putchar_fd(hexa[adr[i] / 16], fd);
		ft_putchar_fd(hexa[adr[i] % 16], fd);
		i++;
	}
}

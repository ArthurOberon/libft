/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:45:58 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/16 12:36:20 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_print_address_fd(void *ptr, int fd)
{
	size_t			i;
	char			adr[16];
	char			*hexa;
	intptr_t		adr_int;

	adr_int = (intptr_t)ptr;
	hexa = "0123456789abcdef";
	i = ft_nbrlen((long)adr_int);
	return_int = i;
	adr[i] = '\0';
	while (--i >= 2)
	{
		adr[i] = hexa[adr_int % 16];
		adr_int = adr_int / 16;
	}
	adr[i--] = 'x';
	adr[i] = '0';
	ft_putstr_fd(adr, fd);
}

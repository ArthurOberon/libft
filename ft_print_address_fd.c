/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:45:58 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/15 21:06:33 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_print_address_fd(unsigned int adr, int fd)
{
	ft_putnbr_base_fd(adr, "0123456789abcdef", fd);
}

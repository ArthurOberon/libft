/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:21:59 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/08 16:41:52 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	i = n;
	while (i != 0)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i--;
	}
	return ((void *)dest);
}

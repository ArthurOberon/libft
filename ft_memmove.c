/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:21:59 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/14 14:31:15 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (!n)
		return ((void *)dest);
	if (dest > src)
	{
		i = n - 1;
		while (i != 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
		((char *)dest)[i] = ((char *)src)[i];
		return ((void *)dest);
	}
	else
	{
		i = -1;
		while (++i != n)
			((char *)dest)[i] = ((char *)src)[i];
		return ((void *)dest);
	}
}

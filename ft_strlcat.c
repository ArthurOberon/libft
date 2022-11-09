/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:09:03 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/09 10:23:09 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *str, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			dst_length;
	size_t			src_length;

	i = 0;
	j = 0;
	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	while (dst[j] != '\0')
	{
		j++;
		size--;
	}
	if (size == 0)
		return (j + src_length);
	while ((i < size - 1) && src[i] != '\0')
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dest[j] != '\0';
	return (dst_length + src_length);
}

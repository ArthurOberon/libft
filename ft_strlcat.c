/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:09:03 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/13 18:29:02 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *str, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			dst_length;
	size_t			str_length;

	i = 0;
	j = 0;
	dst_length = ft_strlen(dst);
	str_length = ft_strlen(str);
	while (dst[j] != '\0' && size > 0)
	{
		j++;
		size--;
	}
	if (size == 0)
		return (j + str_length);
	while (i < size - 1 && str[i] != '\0')
	{
		dst[j] = str[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst_length + str_length);
}

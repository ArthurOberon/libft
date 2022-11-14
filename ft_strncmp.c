/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:45:41 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/14 11:29:37 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length && first[i] != '\0')
	{
		if (((unsigned char *)first)[i] != ((unsigned char *)second)[i])
			return (((unsigned char *)first)[i] - ((unsigned char *)second)[i]);
		i++;
	}
	if (i < length)
		return (((unsigned char *)first)[i] - ((unsigned char *)second)[i]);
	return (0);
}

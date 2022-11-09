/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:38:47 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/09 17:45:30 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s2_length;
	
	i = 0;
	while (s2[s2_length])
		s2_length++;
	if (s2 == NULL)
		return ((char *)s1);
	while (s1[i] || i < n - s2_length)
	{
		j = 0;
		while (s1[i + j] == s2[j])
		{
			if (s2[j + 1] == '\0')
				return (((char *)s1) + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

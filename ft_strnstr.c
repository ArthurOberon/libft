/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:38:47 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/10 17:52:59 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if ((!ft_strncmp(s1, "", ft_strlen(s1))
			&& !ft_strncmp(s2, "", ft_strlen(s2))))
		return ((char *)s1);
	while (n > i && s1[i])
	{
		if (s1[i] == s2[j])
		{
			k = i;
			while (s1[k] == s2[j] && s1[k] && s2[j] && n > k++)
				j++;
			if (s2[j] == '\0')
				return ((char *)s1 + k - j);
			j = 0;
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:38:47 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/14 11:06:34 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>

static char	*ft_strnstr_helper(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
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

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (!*s2)
		return ((char *)s1);
	if (!n)
		return (NULL);
	if ((!ft_strncmp(s1, "", ft_strlen(s1))
			&& !ft_strncmp(s2, "", ft_strlen(s2))))
		return ((char *)s1);
	return (ft_strnstr_helper(s1, s2, n));
}

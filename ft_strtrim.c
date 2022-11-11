/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:55:13 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/11 15:37:05 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_contain_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	length;
	char	*result;

	start = 0;
	end = ft_strlen(s1) - 1;
	length = end;
	result = NULL;
	while (ft_contain_set(s1[start], set))
		start++;
	length = start;
	while (ft_contain_set(s1[end], set))
	{
		end--;
	}
	length = end - start + 1;
	result = ft_substr(s1, start, length);
	return (result);
}

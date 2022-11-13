/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:14:06 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/13 18:39:01 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		endlen;
	char		*result;

	i = 0;
	result = NULL;
	if (start >= ft_strlen(s))
		endlen = 0;
	else
		endlen = ft_min(ft_strlen(s) - start, len);
	result = malloc(sizeof(char) * (endlen + 1));
	if (result == NULL)
		return (NULL);
	while (i < endlen)
	{
		result[i] = s[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

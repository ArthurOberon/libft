/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:33:17 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/11 15:09:44 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	k;
	size_t	total_length;
	char	*result;

	i = 0;
	k = 0;
	result = NULL;
	total_length = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
		return (NULL);
	while (i < total_length)
	{
		if (i < ft_strlen(s1))
		{
			result[i] = s1[i];
		}
		else
			result[i] = s2[k++];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:32:16 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/10 09:41:52 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	int		length;
	char	*result;

	length = ft_strlen(s);
	result = malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);
	length = 0;
	while (s[length])
	{
		result[length] = s[length];
		length++;
	}
	result[length] = '\0';
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:03:29 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/14 14:31:03 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	if (searchedChar == 0)
		return ((char *)string + ft_strlen(string));
	if (searchedChar > 256)
		searchedChar -= 256;
	while (*string)
	{
		if (*string == searchedChar)
			return ((char *)string);
		string++;
	}
	return (NULL);
}

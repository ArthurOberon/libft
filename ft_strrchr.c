/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:42:32 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/10 16:26:37 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	char	*return_value;

	return_value = NULL;
	if (searchedChar == 0)
		return ((char *)string + ft_strlen(string));
	if (searchedChar > 256)
		searchedChar -= 256;
	while (*string)
	{
		if (*string == searchedChar)
			return_value = (char *)string;
		string++;
	}
	return (return_value);
}

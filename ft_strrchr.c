/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:42:32 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/09 12:44:00 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	char	*return_value;

	return_value = NULL;
	while (*string)
	{
		if (*string == searchedChar)
			return_value = (char *)string;
		string++;
	}
	return (return_value);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:01:30 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/10 11:35:11 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb == 0 || size == 0 || SIZE_MAX / nmemb < size)
		return (NULL);
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, (nmemb * size));
	return (result);
}

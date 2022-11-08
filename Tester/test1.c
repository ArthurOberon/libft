/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:35:12 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/08 14:25:08 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_isalpha.c"
#include"../ft_isdigit.c"
#include"../ft_isalnum.c"
#include"../ft_isascii.c"
#include"../ft_isprint.c"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isalpha('6'));
	printf("%d\n", isalpha('6'));
	printf("%d\n", ft_isdigit(48));
	printf("%d\n", isdigit(48));
	printf("%d\n", ft_isalnum('y'));
	printf("%d\n", isalnum('y'));
	printf("%d\n", ft_isascii('U000041C'));
	printf("%d\n", isascii('U000041C'));
	printf("%d\n", ft_isprint(126));
	printf("%d\n", isprint(126));
	return (0);
}

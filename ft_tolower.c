/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:51:04 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/10 20:04:49 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	tolower is a function from <ctype.h>
	It converts character to lowercase

	Lowercase letters ('a' to 'z') have ASCII values ranging from 97 to 122
	Uppercase letters ('A' to 'Z') have ASCII values ranging from 65 to 90

	There is a consistent difference of 32 between the ASCII
	values of lowercase and uppercase
*/

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		return (i + 32);
	}
	else
	{
		return (i);
	}
}

// int	main(void)
// {
// 	char test = 'Z';

//     char result = ft_tolower(test);

// 	printf("ft_tolower: ");
// 	if (ft_tolower(result))
// 	{
// 		printf("%c\n", result);
// 	}
// 	else
// 	{
// 		printf("%c\n", result);
// 	}

// 	printf("tolower   : ");
// 	if (tolower(result))
// 	{
// 		printf("%c\n", result);
// 	}
// 	else
// 	{
// 		printf("%c\n", result);
// 	}

// 	return (0);
// }
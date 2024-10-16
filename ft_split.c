/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:23:44 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/17 17:25:22 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* splits a string using a char as parameter. */

#include "libft.h"

static void	free_strs(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	split_str(char const *str, char c, char **result, int i)
{
	int	len;

	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			len = 0;
			while (*str != c && *str)
			{
				str++;
				len++;
			}
			result[i] = (char *)malloc(len + 1);
			if (!result[i])
			{
				free_strs(result);
				return (-1);
			}
			ft_strlcpy((char *)result[i++], (char *)str - len, len + 1);
		}
	}
	result[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if ((split_str(s, c, result, 0)) == -1)
		return (NULL);
	return (result);
}

// int	main(void)
// {
// 	char **str = ft_split("aaa123a456aaaa78ba", 'a');
// 	if (!str)
// 	{
// 		printf("Error occurred while splitting the string. \n");
// 		return (1);
// 	}
// 	int i = 0;
// 	while (str[i])
// 	{
// 		printf("%s\n", str[i]);
// 		i++;
// 	}

// 	free_strs(str);

// 	return (0);
// }
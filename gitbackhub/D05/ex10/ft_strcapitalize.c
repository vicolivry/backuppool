/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 20:55:11 by volivry           #+#    #+#             */
/*   Updated: 2017/09/13 21:18:33 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 47 || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || str[i] >= 123)
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	str[i + 1] = '\n';
	return (str);
}

#include <stdio.h>

int main(void)
{
	char str[] = "Comment allez-vous, bande+de+nazes";

	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}

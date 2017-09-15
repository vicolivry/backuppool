/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 19:41:21 by volivry           #+#    #+#             */
/*   Updated: 2017/09/15 16:27:01 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (i - 1);
}

int main()
{
	char dest[] = "Coucou";
	char src[] = "iiiiiii";
	ft_strlcpy(dest, src, 8);
	//	printf("%s\n", dest);
	printf("%d\n", ft_strlcpy(dest, src, 8));
	char dest2[45] = "Coucou";
	char src2[] = "iiiiiii";
	strlcpy(dest2, src2, 8);
	//	printf("%s\n", dest2);
	printf("%lu\n", strlcpy(dest2, src2, 8));
return (0);
}

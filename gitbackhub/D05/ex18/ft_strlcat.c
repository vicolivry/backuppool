/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 18:00:35 by volivry           #+#    #+#             */
/*   Updated: 2017/09/14 19:36:35 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (i < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (i + ft_strlen(src));
}

#include <stdio.h>
#include <string.h>

int main()
{
	char dest[] = "Coucou";
	char src[] = " les nazes";
	ft_strlcat(dest, src, 17);
	printf("%s\n", dest);
	//	printf("%d\n", ft_strlcat(dest, src, 9));
	char dest2[45] = "Coucou";
	char src2[] = " les nazes";
	strlcat(dest2, src2, 17);
	printf("%s\n", dest2);
	//	printf("%lu\n", strlcat(dest2, src2, 9));
	return (0);
}

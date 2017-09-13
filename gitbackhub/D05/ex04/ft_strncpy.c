/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 12:25:41 by volivry           #+#    #+#             */
/*   Updated: 2017/09/13 15:14:37 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	int		index;

	i = 0;
	index = 0;
	while (i < n)
	{
		dest[index] = src[index];
		i++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

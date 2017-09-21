/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 16:50:09 by volivry           #+#    #+#             */
/*   Updated: 2017/09/21 20:08:25 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_spcl_strcat(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	s1[i] = '\n';
	i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		len;
	char	*concated_params;

	i = 1;
	len = 0;
	concated_params = NULL;
	while (i < argc)
	{
		len += ft_strlen(argv[i]);
		i++;
	}
	concated_params = malloc(sizeof(char) * len);
	i = 1;
	while (i < argc - 1)
	{
		concated_params = ft_spcl_strcat(argv[1], argv[1 + i]);
		i++;
	}
	return (concated_params);
}

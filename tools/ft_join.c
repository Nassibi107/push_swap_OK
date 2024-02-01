/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:32:36 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/29 13:37:13 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

char	*ft_join(char **av, int len, int ac)
{
	char	*str;
	int		i;
	int		j;
	int		s;

	i = 0;
	j = 1;
	s = 0;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			str[s] = av[j][i];
			s++;
			i++;
		}
		if (j++ < ac - 1)
			str[s++] = ' ';
	}
	return (str[s] = '\0', str);
}

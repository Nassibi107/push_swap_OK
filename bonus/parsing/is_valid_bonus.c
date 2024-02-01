/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:30:32 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/29 15:03:09 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int	is_valid_bonus(char **rst)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (rst[i])
	{
		j = 0;
		if (rst[i][j] == 45 || rst[i][j] == 43)
			j++;
		if (!rst[i][j])
			return (0);
		while (rst[i][j])
		{
			if (!ft_isdigit(rst[i][j++]))
			{
				return (0);
			}
		}
		if (ft_atoi(rst[i]) > 2147483647
			|| ft_atoi(rst[i]) < -2147483647)
			return (0);
		i++;
	}
	return (1);
}

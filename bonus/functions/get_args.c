/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:34:01 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/01 10:30:43 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parsing/parsing.h"
#include <stdlib.h>

char	**get_args(void)
{
	char		*str;
	char		*s;
	char		**strs;

	str = malloc(1);
	if (!str)
		return (0x0);
	while (1337)
	{
		s = get_next_line(0);
		if (!s)
		{
			free(s);
			break ;
		}
		if (!check_argg(s) && !chrck_arg(s))
			return (0x0);
		str = ft_strjoin(str, s);
		free(s);
	}
	strs = ft_split(str, '\n');
	free(str);
	return (strs);
}

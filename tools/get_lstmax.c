/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lstmax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:23:46 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 16:01:55 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	get_lstmax(t_stack *sa)
{
	int		s;
	int		i;
	t_stack	*tmp;

	s = 0;
	i = 1;
	tmp = sa;
	s = tmp->value;
	tmp = tmp->next;
	while (tmp)
	{
		if (s < tmp->value)
			s = tmp->value;
		tmp = tmp->next;
	}
	tmp = sa;
	while (tmp)
	{
		if (tmp->value == s)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}

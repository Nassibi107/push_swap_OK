/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lstmin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:00:12 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 11:27:51 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	get_lstmin(t_stack *sa)
{
	int		i;
	int		s;
	t_stack	*tmp;

	i = 1;
	tmp = sa;
	s = tmp->value;
	tmp = tmp->next;
	while (tmp)
	{
		if (s > tmp->value)
			s = tmp->value;
		tmp = tmp->next;
	}
	tmp = sa;
	while (tmp)
	{
		if (s == tmp->value)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}

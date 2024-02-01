/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lst_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:16:33 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 16:01:44 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

t_stack	*get_lst_pos(t_stack *head, int a)
{
	t_stack	*tmp;
	int		i;

	tmp = head;
	i = 1;
	while (i < a)
	{
		if (tmp->next)
			tmp = tmp->next;
		i++;
	}
	return (tmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundler_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:43:09 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 15:46:23 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	hundler_moves(t_stack **sb, t_stack **sa)
{
	t_stack	*tmp;
	int		size;
	int		size1;
	int		index;
	int		index1;

	tmp = *sb;
	while (tmp)
	{
		size = get_lstsize(*sa);
		size1 = get_lstsize(*sb);
		index = get_lst_id(sa, tmp->hook->value);
		index1 = get_lst_id(sb, tmp->value);
		if (index < size / 2)
			tmp->hook->mv = index;
		else if (index >= size / 2)
			tmp->hook->mv = size - index;
		if (index1 < size1 / 2)
			tmp->mv = index1;
		else if (index1 >= size1 / 2)
			tmp->mv = size1 - index1;
		tmp = tmp->next;
	}
}

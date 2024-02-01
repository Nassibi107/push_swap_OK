/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_lsthl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:52:08 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/26 11:51:04 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	set_lsthl(t_stack **sa, t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = *stack_b;
	while (tmp)
	{
		tmp->hook = get_lsthl(tmp->value, sa);
		if (tmp->hook == NULL)
			tmp->hook = get_lst_pos(*sa, get_lstmin(*sa));
		tmp = tmp->next;
	}
}

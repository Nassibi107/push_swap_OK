/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:57:28 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 15:54:50 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void	sort(t_stack **stack_a)
{
	int	a;

	a = get_lstmin(*stack_a);
	while (get_lst_id(stack_a, (*stack_a)->value) != get_lstmin(*stack_a)
		- 1)
	{
		if (a < get_lstsize(*stack_a) / 2)
			rotate(stack_a, 1);
		else
			rrotate(stack_a, 1);
	}
}

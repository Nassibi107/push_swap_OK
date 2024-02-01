/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_sort_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:54:11 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 15:47:41 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	lst_sort_3(t_stack **sa)
{
	if (get_lstsize(*sa) == 2 || get_lstsize(*sa) == 1)
	{
		if (get_lstsize(*sa) == 2
			&& (*sa)->value > (*sa)->next->value)
			swap(sa, 1);
		exit(0);
	}
	if (get_lstmax(*sa) == 1 && get_lstmin(*sa) == 2)
		rotate(sa, 1);
	if (get_lstmax(*sa) == 1 && get_lstmin(*sa) == 3)
	{
		swap(sa, 1);
		rrotate(sa, 1);
	}
	if (get_lstmin(*sa) == 2)
		swap(sa, 1);
	if (get_lstmin(*sa) == 3)
		rrotate(sa, 1);
	if (get_lstmax(*sa) == 2 && get_lstmin(*sa) == 1)
	{
		swap(sa, 1);
		rotate(sa, 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_lsthook.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:45:46 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 15:48:37 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static void	wall(t_stack **sa, t_stack **sb)
{
	while ((*sa)->sub != 0)
		rrotate(sa, 1);
	ft_push(sa, sb, 0);
}

void	push_lsthook(t_stack **sa, t_stack **sb)
{
	int	size;
	int	i;

	size = get_lstsize(*sa);
	while (1)
	{
		i = get_lstsub(sa);
		if (i == 0)
			break ;
		if (i > (size / 2))
			wall(sa, sb);
		else
		{
			if (i != 1)
			{
				while ((*sa)->hook != 0)
					rotate(sa, 1);
			}
			ft_push(sa, sb, 0);
		}
	}
}

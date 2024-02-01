/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_down_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:01:00 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/26 17:34:13 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static void	case_1(t_stack **sb, t_stack *jk)
{
	if (jk->mv > 0)
	{
		rotate(sb, 0);
		jk->mv = jk->mv - 1;
	}
	else if (jk->mv < 0)
	{
		rrotate(sb, 0);
		jk->mv = jk->mv + 1;
	}
}

static void	case_2(t_stack **sa, t_stack *jk)
{
	if (jk->hook->mv > 0)
	{
		rotate(sa, 1);
		jk->hook->mv = jk->hook->mv - 1;
	}
	else if (jk->hook->mv < 0)
	{
		rrotate(sa, 1);
		jk->hook->mv = jk->hook->mv + 1;
	}
}

void	ft_down_up(t_stack **sa, t_stack **sb, t_stack *jk)
{
	while (jk->mv != 0 || jk->hook->mv != 0)
	{
		case_1(sb, jk);
		case_2(sa, jk);
	}
}

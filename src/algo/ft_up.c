/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:59:11 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 15:45:04 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static void	case_1(t_stack **sa, t_stack **sb, t_stack *jk)
{
	if (jk->mv != 0 && jk->hook->mv != 0)
	{
		rotate_ab(sb, sa);
		jk->mv = jk->mv - 1;
		jk->hook->mv = jk->hook->mv - 1;
	}
}

static void	case_2(t_stack **sa, t_stack **sb, t_stack *jk)
{
	if (jk->mv != 0 && jk->hook->mv == 0)
	{
		rotate(sb, 0);
		jk->mv = jk->mv - 1;
	}
	else if (jk->mv == 0 && jk->hook->mv != 0)
	{
		rotate(sa, 1);
		jk->hook->mv = jk->hook->mv - 1;
	}
}

void	ft_up(t_stack **sa, t_stack **sb, t_stack *jk)
{
	while (jk->mv != 0 || jk->hook->mv != 0)
	{
		case_1(sa, sb, jk);
		case_2(sa, sb, jk);
	}
}

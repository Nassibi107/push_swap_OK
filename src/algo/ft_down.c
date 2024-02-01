/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_down.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:57:44 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/26 17:35:10 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static void	case_1(t_stack **sa, t_stack **sb, t_stack *jk)
{
	if (jk->mv != 0 && jk->hook->mv != 0)
	{
		rrotate_ab(sb, sa);
		jk->mv = jk->mv + 1;
		jk->hook->mv = jk->hook->mv + 1;
	}
}

static void	case_2(t_stack **sa, t_stack **sb, t_stack *jk)
{
	if (jk->mv != 0 && jk->hook->mv == 0)
	{
		rrotate(sb, 0);
		jk->mv = jk->mv + 1;
	}
	else if (jk->mv == 0 && jk->hook->mv != 0)
	{
		rrotate(sa, 1);
		jk->hook->mv = jk->hook->mv + 1;
	}
}

void	ft_down(t_stack **sa, t_stack **sb, t_stack *jk)
{
	while (jk->mv != 0 || jk->hook->mv != 0)
	{
		case_1(sa, sb, jk);
		case_2(sa, sb, jk);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:53:34 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 14:57:32 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	ft_index(t_stack **sb, t_stack **sa, t_stack *jk)
{
	while (*sb != jk || *sa != jk->hook)
	{
		if (jk->mv == 0 && jk->hook->mv == 0)
			break ;
		if (jk->mv < 1 && jk->hook->mv < 1)
			ft_down(sa, sb, jk);
		else if (jk->mv >= 1 && jk->hook->mv >= 1)
			ft_up(sa, sb, jk);
		else
			ft_down_up(sa, sb, jk);
	}
}

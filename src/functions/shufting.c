/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shufting.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:03:13 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 15:54:14 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void	shufting(t_stack **sa, t_stack **sb)
{
	int	s_all;
	int	*arr_sq;

	s_all = ((get_lstsize(*sa) + 1) * 4);
	arr_sq = malloc(s_all);
	if (!arr_sq)
		return ;
	ft_sub(sa, &arr_sq);
	push_lsthook(sa, sb);
	while (get_lstsize(*sb))
	{
		set_lsthl(sa, sb);
		hundler_moves(sb, sa);
		get_lstbmv(sa, sb);
		ft_push(sb, sa, 1);
	}
	free(arr_sq);
}

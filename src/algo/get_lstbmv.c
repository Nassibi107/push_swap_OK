/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lstbmv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:34:20 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 15:45:49 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	get_lstbmv(t_stack **sa, t_stack **sb)
{
	t_stack	*tk;
	t_stack	*tmp_sb;
	int		id;
	int		h_ssb;
	int		h_ssa;

	h_ssb = get_lstsize(*sb);
	h_ssa = get_lstsize(*sa);
	tmp_sb = *sb;
	id = INT_MAX;
	while (tmp_sb)
	{
		if (id > (tmp_sb->mv + tmp_sb->hook->mv))
		{
			id = (tmp_sb->mv + tmp_sb->hook->mv);
			tk = tmp_sb;
		}
		tmp_sb = tmp_sb->next;
	}
	if (get_lst_id(sa, tk->hook->value) >= h_ssa / 2)
		tk->hook->mv = tk->hook->mv * -1;
	if (get_lst_id(sb, tk->value) >= h_ssb / 2)
		tk->mv = (tk->mv) * -1;
	ft_index(sb, sa, tk);
}

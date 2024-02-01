/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:43:20 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/29 12:01:08 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

int	is_lstsort(t_stack **sa)
{
	t_stack	*tmp;
	t_stack	*tk;
	int		vd;

	tmp = *sa;
	tk = (*sa)->next;
	vd = 1;
	while (tk)
	{
		if (tk->value < tmp->value)
			vd = 0;
		tmp = tmp->next;
		tk = tk->next;
	}
	if (vd == 1)
		ft_lstclear(sa);
	return (vd);
}

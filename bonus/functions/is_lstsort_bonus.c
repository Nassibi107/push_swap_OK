/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lstsort_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:43:20 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/31 11:23:06 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"
#include <stdlib.h>

int	is_lstsort_bonus(t_stack **sa)
{
	t_stack	*tmp;
	t_stack	*tk;
	int		vd;

	if (!(*sa))
		return (-1);
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
	return (vd);
}

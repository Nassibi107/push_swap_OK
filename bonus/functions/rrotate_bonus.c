/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:17:54 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/31 12:02:15 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"
#include <stdio.h>

void	rrotate_bonus(t_stack **head)
{
	t_stack	*p;
	t_stack	*tmp1;
	t_stack	*tmp;
	int		index;

	if (!(*head) || get_lstsize_bonus(*head) == 1)
		return ;
	p = *head;
	tmp = ft_last_bonus(p);
	index = get_lstsize_bonus(p);
	tmp1 = get_lst_pos_bonus(p, index - 1);
	tmp->next = p;
	tmp1->next = NULL;
	*head = tmp;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:16:27 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/31 11:24:08 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void	rotate_bonus(t_stack **head)
{
	t_stack	*last;
	t_stack	*tmp;

	if (!(*head) || !(*head)->next)
		return ;
	tmp = (*head)->next;
	last = ft_last_bonus(*head);
	last->next = *head;
	(*head)->next = NULL;
	*head = tmp;
}

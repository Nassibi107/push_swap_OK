/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:48:51 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:36:49 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void	rotate(t_stack **head, int flag)
{
	t_stack	*last;
	t_stack	*tmp;

	if (flag == 1)
		ft_putendl_fd("ra", 1);
	else if (flag == 0)
		ft_putendl_fd("rb", 1);
	tmp = (*head)->next;
	last = ft_last(*head);
	last->next = *head;
	(*head)->next = NULL;
	*head = tmp;
}

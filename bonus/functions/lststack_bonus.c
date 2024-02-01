/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lststack_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:51:46 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/29 15:04:04 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

t_stack	*lststack_bonus(t_stack *lst)
{
	t_stack	*temp;

	if (!lst)
		return (0x0);
	temp = lst;
	if (!temp)
		return (0);
	while (temp->next)
		temp = temp->next;
	return (temp);
}

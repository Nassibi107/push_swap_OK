/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_s_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:43:39 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/29 14:57:09 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void	ft_lstadd_front_s_bonus(t_stack **head, t_stack *jk)
{
	if (*head == NULL)
	{
		*head = jk;
		(*head)->next = NULL;
	}
	else
	{
		jk->next = *head;
		*head = jk;
	}
}

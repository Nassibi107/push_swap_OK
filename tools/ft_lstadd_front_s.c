/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_s.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:43:39 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 15:59:46 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_lstadd_front_s(t_stack **head, t_stack *new)
{
	if (*head == NULL)
	{
		*head = new;
		(*head)->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
}

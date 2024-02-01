/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lstsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:16:53 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/26 12:13:53 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	get_lstsub(t_stack **head)
{
	t_stack	*tmp;
	int		i;

	tmp = *head;
	i = 1;
	while (tmp->next)
	{
		if (tmp->sub == 0)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (0);
}

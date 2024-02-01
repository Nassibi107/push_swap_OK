/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:50:23 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 11:28:45 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	get_lstsize(t_stack *sa)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = sa;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

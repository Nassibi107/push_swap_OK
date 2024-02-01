/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lstsize_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:50:23 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/29 14:32:18 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

int	get_lstsize_bonus(t_stack *sa)
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

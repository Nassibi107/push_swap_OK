/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lsthl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:49:17 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 15:46:02 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

t_stack	*get_lsthl(int a, t_stack **sa)
{
	t_stack	*p;
	t_stack	*tmp;

	tmp = NULL;
	p = *sa;
	while (p)
	{
		if (p->value > a && (!tmp || tmp->value > p->value))
			tmp = p;
		p = p->next;
	}
	return (tmp);
}

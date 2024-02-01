/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:47:04 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 15:19:48 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	ft_push(t_stack **src, t_stack **dest, int flag)
{
	t_stack	*j;

	j = (*src);
	(*src) = (*src)->next;
	ft_lstadd_front_s(dest, j);
	if (flag == 1)
		ft_putendl_fd("pa", 1);
	else
	{
		ft_putendl_fd("pb", 1);
		if (get_lstsize(*src) > 5)
			skeaper(dest);
	}
}

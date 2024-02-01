/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skeaper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:01:08 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 15:48:49 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	skeaper(t_stack **head)
{
	int	avg;
	int	v_max;
	int	v_min;

	v_max = get_lst_pos(*head, get_lstmax(*head))->value;
	v_min = get_lst_pos(*head, get_lstmin(*head))->value;
	avg = (v_max + v_min) / 2;
	if ((*head)->value > avg)
		rotate(head, 0);
}

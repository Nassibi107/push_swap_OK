/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:17:39 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/26 11:27:06 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void	swap_ab(t_stack **stack_a, t_stack **stack_b)
{
	ft_putendl_fd("ss", 1);
	swap(stack_a, 2);
	swap(stack_b, 2);
}
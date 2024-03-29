/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:11:20 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/27 15:53:03 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void	rotate_ab(t_stack **sa, t_stack **sb)
{
	rotate(sa, 2);
	rotate(sb, 2);
	ft_putendl_fd("rr", 1);
}

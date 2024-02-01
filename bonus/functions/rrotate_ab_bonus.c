/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_ab_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:13:18 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/31 10:55:15 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void	rrotate_ab_bonus(t_stack **sa, t_stack **sb)
{
	rrotate_bonus(sb);
	rrotate_bonus(sa);
}

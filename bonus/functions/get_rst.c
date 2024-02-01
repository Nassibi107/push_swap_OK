/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:29:49 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/01 10:35:10 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void	get_rst(char **str, t_stack **sb, t_stack **sa)
{
	agg(str, sb, sa);
	if (is_lstsort_bonus(sa) == 1 && get_lstsize_bonus(*sb) == 0)
	{
		ft_lstclear_bonus(sa);
		ft_lstclear_bonus(sb);
		ft_putendl_fd("OK", 1);
	}
	else
	{
		ft_lstclear_bonus(sa);
		ft_lstclear_bonus(sb);
		ft_putendl_fd("KO", 2);
	}
}

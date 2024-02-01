/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:30:09 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/29 13:36:57 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	ft_switch(t_stack *sa, t_stack *sb)
{
	int	len;

	if (is_lstsort(&sa) == 1)
		return ;
	len = get_lstsize(sa);
	if (len <= 3)
	{
		lst_sort_3(&sa);
		ft_lstclear(&sa);
	}
	else if (len <= 5)
	{
		lst_sort_4(&sa, &sb);
		ft_lstclear(&sb);
		ft_lstclear(&sa);
	}
	else if (len > 5)
	{
		shufting(&sa, &sb);
		sort(&sa);
		ft_lstclear(&sb);
		ft_lstclear(&sa);
	}
}

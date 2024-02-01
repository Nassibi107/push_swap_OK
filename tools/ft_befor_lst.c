/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_befor_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 21:15:57 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 10:57:51 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

t_stack	*ft_befor_lst(t_stack *lst)
{
	t_stack	*temp;

	temp = lst;
	if (!temp)
		return (0);
	while (temp->next->next)
		temp = temp->next;
	return (temp);
}

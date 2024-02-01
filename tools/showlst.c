/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   showlst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:37:05 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:40:10 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	showlst(t_stack *head)
{
	while (head)
	{
		printf("\033[0;94m%d\e[0m", head->value);
		printf("\e[38;5;118m  :[%p]\e[0m\t", head);
		printf("\033[0;96m   sub:[%d]\e[0m\t", head->sub);
		printf("\033[0;95m   hook:[%p]\e[0m\t", head->hook);
		printf("\033[0;90m   moves:[%d]\e[0m\t\n", head->mv);
		head = head->next;
	}
}

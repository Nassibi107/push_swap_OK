/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:57:53 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/25 14:37:11 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static void	ft_gvone(t_stack **sa, int *tab, int minlst)
{
	int	i;
	int	j;
	int	vj;
	int	vi;

	i = 0;
	while (--minlst > 1)
	{
		j = 0;
		while (j < i)
		{
			vi = (get_lst_pos(*sa, i + 1)->value);
			vj = (get_lst_pos(*sa, j + 1)->value);
			if ((vi > vj) && (tab[j] + 1 > tab[j]))
				tab[j] = tab[j] + 1;
			j++;
		}
		i++;
	}
}

void	ft_sub(t_stack **sa, int **ar)
{
	int	i;
	int	pos;

	i = 0;
	pos = get_lstmin(*sa) + 1;
	while (i++ < pos)
		ar[0][i] = 1;
	ft_gvone(sa, ar[0], pos);
	ft_setflag(sa, ar, get_lstsize(*sa));
}

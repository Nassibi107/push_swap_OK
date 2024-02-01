/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setflag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:53:37 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/26 17:53:02 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static void	fill_arr(int **tab, int len, int *i, int *t)
{
	while (*i < len)
	{
		if (t < tab[*i])
			t = tab[*i];
		i++;
	}
}

void	ft_setflag(t_stack **sa, int **ar, int len)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	fill_arr(ar, len, &i, &t);
	while (1337)
	{
		if (i == -1)
			break ;
		i = getnt_lstsub(ar, t, len);
		get_lst_pos(*sa, i + 1)->sub = 1;
		if (t == 0)
			break ;
		t -= 1;
		len -= len - i;
	}
}

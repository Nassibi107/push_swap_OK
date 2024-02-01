/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnt_lstsub.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:34:57 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/26 15:36:26 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

int	getnt_lstsub(int **tab, int i, int len)
{
	while (len > 0)
	{
		if (tab[0][len] == i)
			return (len);
		len--;
	}
	return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:36:56 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/31 17:16:18 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing/parsing.h"
#include <stdio.h>

int	check_argg(char *arrg)
{
	int	len;

	len = ft_strlen(arrg);
	if (ft_strncmp(arrg, "rra\n", len) == 0)
		return (1);
	else if (ft_strncmp(arrg, "rrb\n", len) == 0)
		return (1);
	else if (ft_strncmp(arrg, "rrr\n", len) == 0)
		return (1);
	return (0);
}

int	chrck_arg(char *arg)
{
	int	len;

	len = ft_strlen(arg);
	if (ft_strncmp(arg, "sb\n", len) == 0)
		return (1);
	else if (ft_strncmp(arg, "ss\n", len) == 0)
		return (1);
	else if (ft_strncmp(arg, "ra\n", len) == 0)
		return (1);
	else if (ft_strncmp(arg, "rb\n", len) == 0)
		return (1);
	else if (ft_strncmp(arg, "rr\n", len) == 0)
		return (1);
	else if (ft_strncmp(arg, "pa\n", len) == 0)
		return (1);
	else if (ft_strncmp(arg, "pb\n", len) == 0)
		return (1);
	else if (ft_strncmp(arg, "sa\n", len) == 0)
		return (1);
	return (0);
}

void	agg(char **str, t_stack **sb, t_stack **sa)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_strncmp(str[i], "ss", 2) == 0)
			swap_ab_bonus(sa, sb);
		else if (ft_strncmp(str[i], "rrr", 3) == 0)
			rrotate_ab_bonus(sa, sb);
		else if (ft_strncmp(str[i], "rrb", 3) == 0)
			rrotate_bonus(sb);
		else if (ft_strncmp(str[i], "rra", 3) == 0)
			rrotate_bonus(sa);
		else if (ft_strncmp(str[i], "pb", 2) == 0)
			fpush_bonus(sa, sb);
		else if (ft_strncmp(str[i], "pa", 2) == 0)
			fpush_bonus(sb, sa);
		else
			aggs(str[i], sb, sa);
		i++;
	}
}

void	aggs(char *str, t_stack **sb, t_stack **sa)
{
	if (ft_strncmp(str, "sa", 2) == 0)
		swap_bonus(sa);
	else if (ft_strncmp(str, "rr", 2) == 0)
		rotate_ab_bonus(sa, sb);
	else if (ft_strncmp(str, "rb", 2) == 0)
		rotate_bonus(sb);
	else if (ft_strncmp(str, "ra", 2) == 0)
		rotate_bonus(sa);
	else if (ft_strncmp(str, "sb", 2) == 0)
		swap_bonus(sb);
	return ;
}

void	fpush_bonus(t_stack **src, t_stack **dest)
{
	t_stack	*j;

	j = (*src);
	(*src) = (*src)->next;
	ft_lstadd_front_s_bonus(dest, j);
}

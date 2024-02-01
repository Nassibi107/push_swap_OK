/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:02:11 by ynassibi          #+#    #+#             */
/*   Updated: 2024/02/01 10:31:17 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "src/libft/libft.h"

static void	err(void)
{
	ft_putendl_fd("Error", 2);
	exit(1);
}

static int	is_empty(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (!str[i])
		return (1);
	return (0);
}

char	**input_checker(int ac, char **av)
{
	char	*str;
	char	**rst;
	int		len;

	len = ft_lenjoin(av, ac);
	str = ft_join(av, len, ac);
	rst = ft_split(str, ' ');
	free(str);
	if (is_valid(rst) && is_double(rst))
		return (rst);
	else
		ft_srtclear(rst);
	return (0x0);
}

static int	ft_parsing(int ac, char **av)
{
	int			j;
	int			e;
	char		**rst;

	j = 1;
	e = 0;
	while (j < ac)
	{
		if (is_empty(av[j++]))
			e += 1;
	}
	rst = input_checker(ac, av);
	if (!e)
	{
		if (rst != NULL)
			return (ft_srtclear(rst), 1);
		else
			return (0);
	}
	else
		return (0);
}

int	main(int ac, char **av)
{
	t_stack		*sa;
	t_stack		*sb;
	char		**str;

	sb = NULL;
	if (ft_parsing(ac, av))
	{
		if (ac > 1)
		{
			str = input_checker(ac, av);
			ft_build_sa(str, &sa);
			ft_srtclear(str);
			ft_switch(sa, sb);
		}
		else
			exit(1);
	}
	else
		err();
}

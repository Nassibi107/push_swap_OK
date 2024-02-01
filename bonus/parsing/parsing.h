/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:09:29 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/31 17:16:13 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

char	*get_next_line(int fd);

typedef struct stack
{
	int				value;
	int				sub;
	int				mv;
	struct stack	*hook;
	struct stack	*next;

}					t_stack;
void	rotate_ab_bonus(t_stack **sa, t_stack **sb);
void	rotate_bonus(t_stack **head);
void	rrotate_ab_bonus(t_stack **sa, t_stack **sb);
void	rrotate_bonus(t_stack **head);
void	swap_ab_bonus(t_stack **stack_a, t_stack **stack_b);
void	swap_bonus(t_stack **head);
t_stack	*ft_last_bonus(t_stack *head);
t_stack	*get_lst_pos_bonus(t_stack *head, int a);
int		get_lstsize_bonus(t_stack *sa);
int		check_argg(char *arrg);
char	**get_args(void);
int		chrck_arg(char *arg);
void	agg(char **str, t_stack **sb, t_stack **sa);
void	aggs(char *str, t_stack **sb, t_stack **sa);
void	ft_lstadd_front_s_bonus(t_stack **head, t_stack *jk);
void	fpush_bonus(t_stack **src, t_stack **dest);
int		is_lstsort_bonus(t_stack **sa);
t_stack	*ft_befor_lst_bonus(t_stack *lst);
void	ft_build_sa_bonus(char **str, t_stack **sa);
int		ft_double_bonus(char **rst);
char	*ft_join_bonus(char **av, int len, int ac);
int		ft_lenjoin_bonus(char **av, int ac);
void	ft_lstclear_bonus(t_stack **stack);
void	ft_srtclear_bonus(char **s);
int		is_valid_bonus(char **rst);
t_stack	*lststack_bonus(t_stack *lst);
void	showlst(t_stack *head);
void	fpush_bonus_b(t_stack **head, t_stack **sb);
void	get_rst(char **str, t_stack **sb, t_stack **sa);
#endif

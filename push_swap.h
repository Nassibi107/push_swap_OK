/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:23:25 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/28 11:57:04 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "src/libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct stack
{
	int				value;
	int				sub;
	int				mv;
	struct stack	*hook;
	struct stack	*next;

}					t_stack;

t_stack				*lststack(t_stack *lst);
void				showlst(t_stack *head);
void				skeaper(t_stack **stack);
void				ft_lstadd_front_s(t_stack **head, t_stack *j);
t_stack				*ft_lstnew(int content);
void				ft_switch(t_stack *sa, t_stack *sb);
void				ft_push(t_stack **src, t_stack **dest, int flag);
void				shufting(t_stack **sa, t_stack **sb);
void				sort(t_stack **sa);
int					is_lstsort(t_stack **sa);
t_stack				*ft_creat_stack(char **s);
t_stack				*ft_last(t_stack *head);
int					get_lstsub(t_stack **head);
void				push_lsthook(t_stack **sa, t_stack **sb);
t_stack				*get_lsthl(int a, t_stack **sa);
void				set_lsthl(t_stack **sa, t_stack **sb);
void				lst_sort_4(t_stack **sa, t_stack **sb);
void				ft_sub(t_stack **sa, int **ar);
void				lst_sort_3(t_stack **sa);
void				ft_setflag(t_stack **sb, int **ar, int len);
void				rotate(t_stack **head, int flag);
void				rrotate(t_stack **head, int flag);
void				swap(t_stack **head, int flag);
void				ft_error(void);
int					ft_check_duplicated(char **s);
int					ft_check_empty(char *s);
char				**ft_split(char const *s, char c);
int					ft_check_character(char *str);
int					get_lstmax(t_stack *sa);
int					get_lstmin(t_stack *sa);
int					get_lstsize(t_stack *sa);
int					getnt_lstsub(int **tab, int i, int len);
int					ft_is_int(char *str);
void				swap_ab(t_stack **stack_a, t_stack **stack_b);
void				rotate_ab(t_stack **sa, t_stack **sb);
void				rrotate_ab(t_stack **sa, t_stack **sb);
void				ft_down_up(t_stack **sa, t_stack **sb, t_stack *jk);
void				ft_up(t_stack **sa, t_stack **sb, t_stack *jk);
void				ft_down(t_stack **sa, t_stack **sb, t_stack *jk);
t_stack				*get_lst_pos(t_stack *head, int a);
void				hundler_moves(t_stack **sb, t_stack **sa);
void				get_lstbmv(t_stack **sa, t_stack **sb);
void				ft_lstclear(t_stack **stack);
void				ft_srtclear(char **s);
void				ft_index(t_stack **sb, t_stack **sa, t_stack *jk);
t_stack				*ft_befor_lst(t_stack *lst);
void				ft_build_sa(char **str, t_stack **sa);
int					is_double(char **rst);
int					ft_lenjoin(char **av, int ac);
char				*ft_join(char **av, int len, int ac);
int					get_lst_id(t_stack **stack, int a);
int					is_lstsort(t_stack **sa);
int					is_valid(char **rst);
#endif

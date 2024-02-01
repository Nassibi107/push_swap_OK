
NAME = push_swap.a
NAME_B = bonus.a
AOUT = push_swap
AOUT_B = checker

SRCS_T = tools/ft_befor_lst.c tools/ft_build_sa.c tools/ft_double.c tools/ft_join.c tools/ft_lstclear.c \
         tools/ft_join.c tools/ft_last.c tools/ft_lenjoin.c tools/ft_lstadd_front_s.c tools/ft_lstnew.c \
         tools/ft_switch.c tools/get_lst_id.c  tools/get_lst_pos.c tools/get_lstmax.c  tools/get_lstmin.c  \
         tools/get_lstsize.c tools/get_lstsub.c   tools/is_valid.c tools/lststack.c  tools/showlst.c \
			tools/ft_lstclear.c tools/ft_srtclear.c

SRCS_L = src/libft/ft_atoi.c src/libft/ft_putchar_fd.c src/libft/ft_putendl_fd.c src/libft/ft_putnbr_fd.c \
         src/libft/ft_split.c src/libft/ft_isdigit.c src/libft/ft_putstr_fd.c src/libft/ft_bzero.c src/libft/ft_calloc.c

SRCS_LG = src/algo/ft_down.c src/algo/ft_down_up.c src/algo/ft_push.c \
		src/algo/ft_setflag.c src/algo/ft_sub.c src/algo/ft_up.c \
		src/algo/get_lsthl.c  src/algo/hundler_moves.c src/algo/is_lstsort.c \
		src/algo/lst_sort_3.c src/algo/lst_sort_4.c src/algo/push_lsthook.c \
		src/algo/set_lsthl.c src/algo/getnt_lstsub.c src/algo/ft_index.c  \
		src/algo/get_lstbmv.c  src/algo/skeaper.c

SRCS_F = src/functions/rotate.c src/functions/rotate_ab.c src/functions/rrotate.c src/functions/rrotate_ab.c \
			src/functions/shufting.c src/functions/sort.c src/functions/swap.c src/functions/swap_ab.c \


SRCS_FB = bonus/functions/ft_last_bonus.c bonus/functions/ft_lstadd_front_s_bonus.c  bonus/functions/get_args.c \
		bonus/functions/get_lst_pos_bonus.c bonus/functions/get_lstsize_bonus.c  bonus/functions/get_rst.c \
		bonus/functions/is_lstsort_bonus.c bonus/functions/rotate_ab_bonus.c  bonus/functions/rotate_bonus.c \
		bonus/functions/rrotate_ab_bonus.c bonus/functions/rrotate_bonus.c bonus/functions/swap_ab_bonus.c \
		bonus/functions/swap_ab_bonus.c 	bonus/functions/lststack_bonus.c bonus/functions/swap_bonus.c

SRCS_PB = bonus/parsing/ft_befor_lst_bonus.c bonus/parsing/ft_build_sa_bonus.c bonus/parsing/ft_double_bonus.c \
		bonus/parsing/ft_join_bonus.c bonus/parsing/ft_lenjoin_bonus.c bonus/parsing/ft_lstclear_bonus.c \
		bonus/parsing/ft_srtclear_bonus.c bonus/parsing/is_valid_bonus.c

SRCS_LB = bonus/libft/ft_atoi.c  bonus/libft/ft_bzero.c bonus/libft/ft_calloc.c \
		bonus/libft/ft_isdigit.c bonus/libft/ft_putchar_fd.c bonus/libft/ft_putendl_fd.c \
		bonus/libft/ft_putnbr_fd.c bonus/libft/ft_putstr_fd.c bonus/libft/ft_split.c \
		bonus/libft/ft_strjoin.c bonus/libft/ft_strlen.c bonus/libft/ft_strncmp.c

SRCS_GET =	bonus/get_next_line/get_next_line.c  bonus/get_next_line/get_next_line_utils.c

SRC = main.c
OBJ = main.o
OBJS_T = $(SRCS_T:.c=.o)
OBJS_LG = $(SRCS_LG:.c=.o)
OBJS_L = $(SRCS_L:.c=.o)
OBJS_F = $(SRCS_F:.c=.o)

SRCB = bonus/main.c bonus/checker_utils.c
OBJB = bonus/main.o bonus/checker_utils.o
OBJS_FB = $(SRCS_FB:.c=.o)
OBJS_PB = $(SRCS_PB:.c=.o)
OBJS_LB = $(SRCS_LB:.c=.o)
OBJS_GET = $(SRCS_GET:.c=.o)


FLAGS = -Wall -Wextra -Werror -g

HEAD = push_swap.h
CC = cc
GREEN = \033[1;32m
YELLOW=	\e[38;5;226m
BLUE = \033[1;34m
RESET = \033[0m
OK	=	[$(GREEN)SUCCESS$(RESET)]
NO	=	[$(YELLOW)INFO$(RESET)]



HEADERS = push_swap.h
%.o: %.c ${HEADERS}
	@${CC} ${FLAGS} -c $< -o $@

all: $(NAME) $(AOUT)

$(NAME): $(OBJS_L) $(OBJS_T) $(OBJS_F) $(OBJS_LG)
	@ar rc $(NAME) $(OBJS_L) $(OBJS_T) $(OBJS_F) $(OBJS_LG)
	@ranlib $(NAME)

$(AOUT): $(NAME) $(OBJ)
	@$(CC) $(FLAGS) -o $@ $(OBJ) $(NAME)
	@$(RM) $(OBJ)
	@$(RM) $(NAME)
	@echo "$(GREEN)------------------------------------------------------$(RESET)"
	@echo "$(GREEN)		push_swap is running "
	@echo "$(GREEN)------------------------------------------------------$(RESET)"
	@printf "$(OK) push_swap ready.\n"

bonus: $(NAME_B) $(AOUT_B)

$(AOUT_B): $(NAME_B) $(OBJB)
	@$(CC) $(FLAGS) -o $@ $(OBJB) $(NAME_B)
	@$(RM) $(OBJB)
	@$(RM) $(NAME_B)
	@echo "$(BLUE)------------------------------------------------------$(RESET)"
	@echo "$(BLUE)		checker is running "
	@echo "$(BLUE)------------------------------------------------------$(RESET)"
	@printf "$(OK) checker ready.\n"

$(NAME_B) : $(OBJS_PB) $(OBJS_LB) $(OBJS_GET) $(OBJS_FB)
	@ar rc $(NAME_B) $(OBJS_PB) $(OBJS_LB) $(OBJS_GET) $(OBJS_FB)
	@ranlib $(NAME_B)


clean:
	@$(RM) -rf $(OBJ) $(OBJS_L) $(OBJS_T) $(OBJS_F) $(OBJS_LG)
	@$(RM) -rf $(OBJS_PB) $(OBJS_LB) $(OBJS_FB) $(OBJS_GET)
	@printf "$(NO) object files removed.\n"

fclean: clean
	@$(RM) -rf $(NAME) $(AOUT)
	@$(RM) -rf $(NAME_B) $(AOUT_B)
	@printf "$(NO) $(NAME) removed.\n"

re: fclean all

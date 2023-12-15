CC =cc
flags = -Wall -Wextra -Werror
NAME = libft.a
RM = rm -rf
AR = ar rcs
files = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
		ft_calloc.c ft_strdup.c\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c\
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
		ft_putnbr_fd.c ft_itoa.c\
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\
		ft_lstsize_bonus.c ft_lstadd_front_bonus.c ft_lstnew_bonus.c\

BONUSF = ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\
		ft_lstsize_bonus.c ft_lstadd_front_bonus.c ft_lstnew_bonus.c\

OBJS:=$(files:.c=.o)
OBJSB=$(BONUSF:.c=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)


bonus:$(NAME)$(OBJSB)
	$(AR) $(NAME) $(OBJSB)

clean:
	$(RM) *.o
fclean:clean
	$(RM) $(NAME)
	
re:fclean all

.PHONY: all bonus clean fclean re;
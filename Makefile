##
## COMPLOT PROJECT
## AUTHOR:
## Zacharie ABIDAT
##

NAME	 = complot

IDIR	 = include/
IDIR_MY	 = ./include

CC	 = g++ -g -lpthread -lsfml-graphics -lsfml-system -lsfml-window -lsfml-audio
CFLAGS	+= -I $(IDIR) -I $(IDIR_MY)
CFLAGS	+= -Wall -Wextra -W

SRCS_DIR	= sources/
SRCS_FILES	= main.cpp Thread.cpp Core.cpp Player.cpp Menu.cpp Button.cpp Square.cpp

SRCS     = $(addprefix $(SRCS_DIR), $(SRCS_FILES))

OBJS	 = $(SRCS:.cpp=.o)

RM	 = rm -f

all: $(NAME)

$(LIB):
	make -C $(LDIR)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

gdb:    $(OBJS)
	$(CC) -g -o debug $(SRCS_DIR)/$(SRCS_FILES) -I $(IDIR) -I $(IDIR_MY)

clean:
	$(RM) $(OBJS) $(OBJS_COMPO)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
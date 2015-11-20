NAME		= Snake

INCLUDE		= ./include/

SOURCE		= ./source/

SOURCE_FILES	= $(SOURCE)Cell.cpp \
		$(SOURCE)Controller.cpp \
		$(SOURCE)Exception.cpp \
		$(SOURCE)Food.cpp \
		$(SOURCE)InputEvent.cpp \
		$(SOURCE)Main.cpp \
		$(SOURCE)Position.cpp \
		$(SOURCE)Snake.cpp \
		$(SOURCE)Map.cpp \
		$(SOURCE)BodyElement.cpp \
		$(SOURCE)WallElement.cpp

OBJECT		= $(SOURCE_FILES:.cpp=.o)

CXXFLAGS	+= -W -Wall -Wextra -Werror -ansi -g3 -I$(INCLUDE)

GCC		= g++

RM		= rm -rfv

ECHO		= echo -e

all		: $(NAME)

$(NAME)		: $(OBJECT)
		$(GCC) -o $(NAME) $(OBJECT)
		@$(ECHO) '\033[0;36m> Binary Compiled\033[0m'

clean		:
		$(RM) *~ *# *.
		$(RM) $(INCLUDE)*~ $(INCLUDE)*# $(INCLUDE)*.
		$(RM) $(SOURCE)*~ $(SOURCE)*# $(SOURCE)*.
		$(RM) $(OBJECT)
		@$(ECHO) '\033[0;36m> Directory cleaned\033[0m'

fclean		: clean
		$(RM) $(NAME)
		@$(ECHO) '\033[0;36m> Remove executable\033[0m'

re		: fclean all

.PHONY		: all clean fclean re


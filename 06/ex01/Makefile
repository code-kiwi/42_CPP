# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhotting <mhotting@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/03 15:08:29 by mhotting          #+#    #+#              #
#    Updated: 2025/06/28 01:42:25 by mhotting         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#################################################
# GENERAL

NAME					=	cast01

CC						=	c++
CFLAGS					=	-Wall -Werror -Wextra -std=c++98
DEPFLAGS				=	-MP -MMD -MF
HFLAGS					=	-I$(HEADERS_DIR)

# HEADERS
HEADERS_DIR				=	incs/

# SOURCES GENERAL
SRCS_MAIN_DIR			=	srcs/
SRCS_FILES				=	main.cpp	\
							Data.cpp	\
							Serializer.cpp
SRCS					=	$(addprefix $(SRCS_MAIN_DIR), $(SRCS_FILES))

# OBJECTS GENERAL
OBJS_MAIN_DIR			=	.objs/
OBJS_FILES				=	$(SRCS_FILES:.cpp=.o)
OBJS					=	$(addprefix $(OBJS_MAIN_DIR), $(OBJS_FILES))

# DEPENDENCIES
DEPS_MAIN_DIR			=	.deps/
DEPS_FILES				=	$(OBJS_FILES:.o=.d)
DEPS					=	$(addprefix $(DEPS_MAIN_DIR), $(DEPS_FILES))

#################################################
# RULES
all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(OBJS) -o $@

$(OBJS_MAIN_DIR)%.o: $(SRCS_MAIN_DIR)%.cpp
	@mkdir -p $(@D)
	@mkdir -p $(DEPS_MAIN_DIR)$(dir $*)
	$(CC) $(CFLAGS) $(HFLAGS) $(DEPFLAGS) $(DEPS_MAIN_DIR)$*.d -c $< -o $@ 

-include $(DEPS)

clean:
	rm -rf $(OBJS_MAIN_DIR)
	rm -rf $(DEPS_MAIN_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 15:10:24 by mhotting          #+#    #+#              #
#    Updated: 2024/09/13 15:23:09 by mhotting         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#################################################
# GENERAL

NAME					=	megaphone

CC						=	c++
CFLAGS					=	-Wall -Werror -Wextra -std=c++98
DEPFLAGS				=	-MP -MMD -MF

# SOURCES GENERAL
SRCS_MAIN_DIR			=	./
SRCS_FILES				=	megaphone.cpp
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
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJS_MAIN_DIR)%.o: $(SRCS_MAIN_DIR)%.cpp
	@mkdir -p $(@D)
	@mkdir -p $(DEPS_MAIN_DIR)$(dir $*)
	$(CC) $(CFLAGS) $(DEPFLAGS) $(DEPS_MAIN_DIR)$*.d -c $< -o $@ 

-include $(DEPS)

clean:
	rm -rf $(OBJS_MAIN_DIR)
	rm -rf $(DEPS_MAIN_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhotting <mhotting@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 14:14:34 by mhotting          #+#    #+#              #
#    Updated: 2024/09/23 18:19:20 by mhotting         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#################################################
# GENERAL

NAME					=	harlFilter

CC						=	c++
CFLAGS					=	-Wall -Werror -Wextra -std=c++98
DEPFLAGS				=	-MP -MMD -MF
HFLAGS					=	-I$(HEADERS_DIR)

# HEADERS
HEADERS_DIR				=	incs/
HEADERS_FILES			=	Harl.hpp
HEADERS					=	$(addprefix $(HEADERS_DIR), $(HEADERS_FILES))

# SOURCES GENERAL
SRCS_MAIN_DIR			=	srcs/
SRCS_FILES				=	main.cpp	\
							Harl.cpp
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
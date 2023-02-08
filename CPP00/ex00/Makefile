# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 16:38:48 by mthiesso          #+#    #+#              #
#    Updated: 2023/02/08 14:13:52 by mthiesso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CYN = \033[36m
YEL = \033[33m
GRN = \033[32m
RST = \033[0m
PRP = \033[35m
RED = \033[91m
BPRP = \033[135m

CC =	c++
CXXFLAGS =	-Wall -Wextra -Werror -std=c++98
NAME =	megaphone
SRC =	megaphone.cpp

OBJ =	${SRC:.cpp=.o}
DEL = 	rm -rf

all:	${NAME}

${NAME}:	${OBJ}
			@echo "${PRP}-----compilation-----${RST}"
			@echo "[MEGAPHONE]	${CYN}Compilating... 🔨${RST}"
			@${CC} ${OBJ} ${CXXFLAGS} -lpthread \
			-o ${NAME}
			@echo "[MEGAPHONE]	${GRN}OK ${RST}"
			@echo "${GRN}Ready to execute ✅${RST}"
clean:
			@echo "${RED}-----destroying------${RST}"
			@echo "[MEGAPHONE]	${YEL}Deleting...${RST}"
			@${DEL} ${OBJ}
			@echo "[MEGAPHONE]	${GRN}Cleaned 🧽${RST}"

fclean:		clean
			@${DEL} ${NAME}
			@echo "${GRN}Cleaning complete. 🗑${RST}"

re:			fclean all

.PHONY:		all clean fclean
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 13:53:45 by mthiesso          #+#    #+#              #
#    Updated: 2023/03/01 13:55:56 by mthiesso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CYN = \033[36m
YEL = \033[33m
GRN = \033[32m
RST = \033[0m
PRP = \033[35m
RED = \033[91m
BPRP = \033[135m

CXX =	c++
CXXFLAGS =	-Wall -Wextra -Werror -std=c++98
NAME =	replace
SRC =	main.cpp \


OBJ =	${SRC:.cpp=.o}
DEL = 	rm -f

all:	${NAME}

${NAME}:	${OBJ}
			@echo "${PRP}-----compilation-----${RST}"
			@echo "[REPLACE]	${CYN}Compilating... 🔨${RST}"
			@${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}
			@echo "[REPLACE]	${GRN}OK ${RST}"
			@echo "${GRN}Ready to execute ✅${RST}"
clean:
			@echo "${RED}-----destroying------${RST}"
			@echo "[REPLACE]	${YEL}Deleting...${RST}"
			@${DEL} ${OBJ}
			@echo "[REPLACE]	${GRN}Cleaned 🧽${RST}"

fclean:		clean
			@${DEL} ${NAME}
			@echo "${GRN}Cleaning complete. 🗑${RST}"

re:			fclean all

.PHONY:		all clean fclean re
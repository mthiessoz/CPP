# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mthiesso <mthiesso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 15:14:11 by mthiesso          #+#    #+#              #
#    Updated: 2023/02/16 16:34:27 by mthiesso         ###   ########.fr        #
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
NAME =	violence
SRC =	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

OBJ =	${SRC:.cpp=.o}
DEL = 	rm -f

all:	${NAME}

${NAME}:	${OBJ}
			@echo "${PRP}-----compilation-----${RST}"
			@echo "[VIOLENCE]	${CYN}Compilating... 🔨${RST}"
			@${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}
			@echo "[VIOLENCE]	${GRN}OK ${RST}"
			@echo "${GRN}Ready to execute ✅${RST}"
clean:
			@echo "${RED}-----destroying------${RST}"
			@echo "[VIOLENCE]	${YEL}Deleting...${RST}"
			@${DEL} ${OBJ}
			@echo "[VIOLENCE]	${GRN}Cleaned 🧽${RST}"

fclean:		clean
			@${DEL} ${NAME}
			@echo "${GRN}Cleaning complete. 🗑${RST}"

re:			fclean all

.PHONY:		all clean fclean re
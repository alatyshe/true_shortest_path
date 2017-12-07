#----- Colors -----
BLACK ="\033[1;30m"
RED ="\033[1;31m"
GREEN ="\033[1;32m"
YELLOW = "\x1b[33m"
BLUE = "\x1b[34m"
MAGENTA = "\x1b[35m"
CYAN ="\033[1;35m"
PURPLE ="\033[1;36m"
WHITE ="\033[1;37m"
EOC ="\033[0;0m"
RESET = "\x1b[0m"
#==================

NAME = true_shortest_path
CXX = g++ -std=c++11
# CXXFLAGS = -Wall -Wextra -Werror

#------ path -------
FILES_PATH		= ./src
OBJECTS_PATH	= ./objects

#------ files ------
FILES_FILES		= main parse Figure Point

#------ other ------
FILES_OBJ 		= $(addprefix $(OBJECTS_PATH)/, $(addsuffix .o, $(FILES_FILES)))


#------ make ------
all: $(NAME)

$(NAME): $(FILES_OBJ)
	@echo "\n"
	@echo $(CYAN) "\tCompiling $@"$(RESET)
	@$(CXX) $(CXXFLAGS) -o $@ $^ -lncurses $(LIBRARY)
	@echo $(GREEN) "\ttrue_shortest_path\t\t- has been made\n"$(RESET)

$(OBJECTS_PATH)/%.o: $(FILES_PATH)/%.cpp
	@mkdir $(OBJECTS_PATH) 2> /dev/null || true
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(FILES_OBJ)
	@rm -rf $(OBJECTS_PATH)
	@echo $(RED) "\t.o files have been cleaned."$(RESET)
	@echo $(RED) "\t./objects path have been cleaned."$(RESET)

fclean:
	@rm -f $(NAME)
	@rm -f $(FILES_OBJ)
	@rm -rf $(OBJECTS_PATH)
	@echo $(RED) "\t.o files have been cleaned."$(RESET)
	@echo $(RED) "\ttrue_shortest_path have been cleaned.\n"$(RESET)
	@echo $(RED) "\t./objects path have been cleaned."$(RESET)
	


re: fclean all

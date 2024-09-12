# Nom de l'exécutable
NAME = pipex

# Compilateur et options de compilation
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude

# Dossiers pour les fichiers sources et objets
SRCS_DIR = src
OBJS_DIR = obj

# Liste des fichiers source
SRCS = $(SRCS_DIR)/main.c \
		$(SRCS_DIR)/file_utils.c \
		$(SRCS_DIR)/pipex_utils.c

# Génère les fichiers objets à partir des fichiers source
OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(OBJS_DIR)/%.o)

# Règle par défaut
all: $(NAME)

# Création de l'exécutable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Création des fichiers objets
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -rf $(OBJS_DIR)

# Nettoyage complet (objets + exécutable)
fclean: clean
	rm -f $(NAME)

# Recompilation complète
re: fclean all

# Indication que les règles ne correspondent pas à des fichiers
.PHONY: all clean fclean re

NAME = Minitalk
CC = cc
CFLAGS = -Wall -Wextra -Werror -I lib

SERVER = src/server.c
CLIENT = src/client.c

all: server client

server: $(SERVER)	
	@$(CC) $(CFLAGS) $(SERVER) -o server
	@./server

client: $(CLIENT)
	@$(CC) $(CFLAGS) $(CLIENT) -o client

clean:
	@rm -f server client $(NAME)

fclean: clean

re: clean server client

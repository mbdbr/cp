CC = g++
CFLAGS = -Wall -Wextra -Wshadow -Wconversion -Wfatal-errors -g -std=c++17 -fsanitize=undefined,address

%: %.cc
	$(CC) $(CFLAGS) -o $@ $<

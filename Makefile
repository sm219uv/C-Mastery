CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Automaticky nájde všetky .c súbory
SOURCES = $(wildcard *.c)
# Vytvorí názvy programov (bez .c prípony)
PROGRAMS = $(SOURCES:.c=)

# Predvolené: skompiluje všetky programy
all: $(PROGRAMS)

# Pravidlo pre kompiláciu každého programu
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Vyčistí všetky skompilované súbory
clean:
	rm -f $(PROGRAMS)

# Spustí konkrétny program (napr. make run-01)
run-%: %
	./$<

.PHONY: all clean


# make alebo make all - skompiluje všetky programy naraz
# make 01_stars - skompiluje len 01_stars.c
# make 02_palindrome - skompiluje len 02_palindrome.c

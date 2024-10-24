# Makefile for compiling a C program

# Compiler and flags
CC ?= gcc
CFLAGS ?= -O2
LDFLAGS ?=
LIB ?= -lcurl

# Target executable name
TARGET = main

# Source files
SRCS = main.c

# Object files
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(OBJS) $(LIB)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

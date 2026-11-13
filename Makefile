CC=gcc
CFLAGS= -Wall -Wextra -Iinclude

SRCS = src/main.c \
       src/utils/input.c \
	   src/utils/validation.c \
	   src/menu/menu.c \
	   src/file/file_reader.c \
	   src/file/file_writer.c \
	   src/encryption/decrypt.c \
	   src/encryption/encrypt.c 

TARGET  = build/Picocrypt

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean: 
	rm -rf $(TARGET)

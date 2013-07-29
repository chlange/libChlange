SHELL        = /bin/sh
CC           = gcc
CFLAGS       = -fPIC -g -std=c90 -pedantic -Wall -Wextra -Iinclude
LDFLAGS      = -shared
DEBUGFLAGS   = -O0 -D _DEBUG
RELEASEFLAGS = -O2 -D NDEBUG -combine -fwhole-program

TARGET  = libchlange.so
SOURCES = $(shell echo */*.c)
HEADERS = $(shell echo include/*.h)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

clean: 
	rm $(OBJECTS) $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(DEBUGFLAGS) -o $(TARGET) $(OBJECTS)

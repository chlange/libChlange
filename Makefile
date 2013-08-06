SHELL        = /bin/sh
CC           = gcc
RM           = rm
CFLAGS       = -nostdinc -fPIC -g -std=c90 -pedantic -Wall -Wextra -Iinclude
LDFLAGS      = -shared
DEBUGFLAGS   = -O0 -D _DEBUG
RELEASEFLAGS = -O2 -D NDEBUG -combine -fwhole-program

TARGET  = libchlange.so
TARGET_STATIC = libchlange.a
SOURCES = $(shell echo */*.c)
HEADERS = $(shell echo include/*.h)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET) $(TARGET_STATIC)

$(TARGET_STATIC): $(OBJECTS)
	ar rcs $(TARGET_STATIC) $^
	ranlib $(TARGET_STATIC)

clean: 
	-$(RM) -f $(OBJECTS) $(TARGET) $(TARGET_STATIC)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(DEBUGFLAGS) -o $(TARGET) $(OBJECTS)

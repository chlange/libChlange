SHELL        = /bin/sh
CC           = gcc
RM           = rm
CFLAGS       = -nostdinc -fPIC -g -std=c99 -pedantic -Wall -Iinclude
LDFLAGS      = -shared
DEBUGFLAGS   = -O0 -D _DEBUG
RELEASEFLAGS = -O2 -D NDEBUG -combine -fwhole-program

TARGET  = libChlange.so
TARGET_STATIC = libChlange.a
SOURCES = $(shell echo */*.c)
HEADERS = $(shell echo include/*.h)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET) $(TARGET_STATIC)

clean:
	-$(RM) -f $(OBJECTS) $(TARGET) $(TARGET_STATIC)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(DEBUGFLAGS) -o $(TARGET) $(OBJECTS)

$(TARGET_STATIC): $(OBJECTS)
	ar rcs $(TARGET_STATIC) $^
	ranlib $(TARGET_STATIC)

CC = g++
OBJ = main.o
IDIR =include/
CXXFLAGS = -Wall -std=c++11 -fpermissive -I$(IDIR) -Wunused-variable
INCLUDES = -I$(IDIR)

TARGET = storagemanager
SRCS:=src/Block.cpp
SRCS:=$(SRCS) src/File.cpp
SRCS:=$(SRCS) src/FileHash.cpp
SRCS:=$(SRCS) src/FileHeader.cpp
SRCS:=$(SRCS) src/FileHeap.cpp 
SRCS:=$(SRCS) src/FileSequential.cpp
SRCS:=$(SRCS) src/Record.cpp
SRCS:=$(SRCS) src/Field.cpp
SRCS:=$(SRCS) src/Date.cpp
SRCS:=$(SRCS) main.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CXXFLAGS) -o $(TARGET) $(OBJS)

.c.o:
	$(CC) $(CXXFLAGS) -c $<  -o $@

clean:
	$(RM) *.o src/*.o $(TARGET)
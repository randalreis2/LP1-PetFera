#Makefile for "imd0030" C++ application
#Created by Silvio Sampaio 08/11/2020

BIN = ./bin
SRC = ./src
INC = ./include

#PROG = $(BIN)/programa
PROG = programa
CC = g++
CPPFLAGS = -Wall -std=c++11 -I./include

OBJS = $(BIN)/sistema.o $(BIN)/main.o

all : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

debug: CPPFLAGS += -DDEBUG -g -O0
debug: clean all

$(BIN)/main.o : $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@
$(BIN)/sistema.o : $(SRC)/sistema.cpp $(INC)/sistema.hpp 
	$(CC) $(CPPFLAGS) -c $(SRC)/sistema.cpp -o $@
clean:
	rm -f core $(PROG) $(OBJS)

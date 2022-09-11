CXX = g++
OBJECTS = linked_list.o
CFLAGS = -Wall -std=c++2a -O2
EXEC = main

all: $(EXEC)

SRCS = main.cpp

main: $(OBJECTS)
	$(CXX) $(CFLAGS) -o $@ $(SRCS) $^

linked_list.o: linked_list.cpp linked_list.h
	$(CXX) $(CFLAGS) -o $@ -c $<

.PHONY: clean
clean:
	$(RM) $(OBJECTS)

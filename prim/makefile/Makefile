CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.c hash.c prim.c deque.c IsFull.c Enqueue.c lookfor.c addvertex.c addedge.c display.c IsEmpty.c 
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=prims

all: $(SOURCES) $(EXECUTABLE)
	    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)

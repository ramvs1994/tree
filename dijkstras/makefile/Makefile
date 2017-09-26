CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.c dijkstras.c addedge.c addvertex.c display.c Enqueue.c hash.c deque.c IsEmpty.c IsFull.c lookfor.c 
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=dijkstras

all: $(SOURCES) $(EXECUTABLE)
	    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)

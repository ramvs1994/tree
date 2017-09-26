CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.c hash.c addedge.c addvertex.c display.c 
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=graph

all: $(SOURCES) $(EXECUTABLE)
	    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)

CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
INCLUDES=
SOURCES=tree.c insert.c inorder.c preorder.c postorder.c search.c isbst.c bstutl.c delete.c minelement.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=bst

all: $(SOURCES) $(EXECUTABLE)
	    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)

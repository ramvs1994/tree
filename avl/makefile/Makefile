CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=tree.c left_rot.c right_rot.c balance_factor.c delete.c inorder.c preorder.c postorder.c insert.c height.c minelement.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=avl

all: $(SOURCES) $(EXECUTABLE)
	    
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)

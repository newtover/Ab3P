SRC_DIR=./
TRASHFILES = *.o *~ *.bak core	
LIB_INC=-I../include
#.KEEP_STATE:
OS=-g -Wall -Wno-missing-braces -Wno-deprecated-register

libText.a: FBase.o XPost.o Vnab.o Strset.o Hash.o runn.o
	ar rus $@ $?

%.o: $(SRC_DIR)/%.C
	g++ $(OS) -std=c++11 -c -gdwarf-2 $< -o $@ $(LIB_INC)

clean: 
	rm -f $(TRASHFILES)

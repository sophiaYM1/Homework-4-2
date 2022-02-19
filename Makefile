# Makefile for the Spelling Bee project
#****************************************************************

PROG = hw4-2-yager-motl_sophia.cpp

PROGRAMS = \
    hw4-2-yager-motl_sophia.cpp

CPPOPTIONS = -I../StanfordCPPLib -fvisibility-inlines-hidden
LDOPTIONS = -L../StanfordCPPLib
LIB = -lStanfordCPPLib

# ***************************************************************
# Entry to bring the package up to date
#    The "make all" entry should be the first real entry

all: $(PROGRAMS) spl.jar

spl.jar:
	@ln -s ../StanfordCPPLib/spl.jar

$(PROG): $(PROG).o
	g++ $(LDOPTIONS) -o $(PROG) $(PROG).o $(LIB)

$(PROG).o: $(PROG).cpp
	g++ $(CPPOPTIONS) -c $(PROG).cpp


# ***************************************************************
# Standard entries to remove files from the directories
#    tidy  -- eliminate unwanted files
#    clean -- delete derived files in preparation for rebuild

tidy:
	rm -f ,* .,* *~ core a.out *.err

clean scratch: tidy
	rm -f *.o *.a $(PROGRAMS)

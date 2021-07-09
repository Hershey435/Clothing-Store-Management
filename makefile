all : run

run : search.o cut.o add.o childrn.o female.o male.o dress.o main.cpp
	g++ search.o cut.o add.o childrn.o female.o male.o dress.o main.cpp -o run

search.o : search.cpp search.h
	g++ search.cpp search.h -c

cut.o : cut.h cut.cpp
	g++ cut.h cut.cpp -c

add.o : add.h add.cpp
	g++ add.h add.cpp -c

childrn.o : childrn.cpp childrn.h dress.o
	g++ childrn.cpp childrn.h dress.o -c

female.o :female.cpp female.h dress.o
	g++ female.cpp female.h dress.o -c

male.o : male.cpp male.h dress.o
	g++ male.cpp male.h dress.o -c

dress.o : dress.cpp dress.h
	g++ dress.cpp dress.h -c

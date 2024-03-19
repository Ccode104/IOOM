Driver=Driver1
Class=DynamicArray
Output=A11

all: $(Driver).o $(Class).o
	g++ $(Driver).o $(Class).o -o $(Output).out
	./$(Output).out
	rm *.out
	rm *.o
$(Driver).o:$(Driver).cpp
	g++ -c $(Driver).cpp
$(Class).o:$(Class).cpp
	g++ -c $(Class).cpp

Driver=main

all: $(Driver).o Course.o Student.o CourseManager.o
	g++ $(Driver).o Course.o Student.o CourseManager.o -o a.out
	./a.out
	rm *.out
	rm *.o
$(Driver).o: $(Driver).cpp
	g++ -c $(Driver).cpp
Course.o: Course.cpp
	g++ -c Course.cpp
CourseManager.o: CourseManager.cpp
	g++ -c CourseManager.cpp
Student.o: Student.cpp
	g++ -c Student.cpp

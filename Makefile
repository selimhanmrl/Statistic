output : Statistic.o main.o
	g++ -o output statistic.o main.o -std=c++11

main.o : main.cpp
	g++ -c main.cpp -std=c++11 main.cpp

Statistic.o : statistic.cpp
	     g++ -c statistic.cpp -std=c++11 statistic.cpp

clean:
	rm *.o output

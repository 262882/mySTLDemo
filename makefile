all:
	g++ -std=c++11 -Wall helloworld.cpp -o helloworld
	g++ -std=c++11 -Wall myecho.cpp -o myecho
	g++ -std=c++11 -Wall mysort.cpp -o mysort
	g++ -std=c++11 -Wall mygrep.cpp -o mygrep

clean:
	rm helloworld myecho mysort mygrep
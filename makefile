all:
	g++ -std=c++11 -Wall helloworld.cpp -o helloworld
	g++ -std=c++11 -Wall myecho.cpp -o myecho
	g++ -std=c++11 -Wall mysort.cpp -o mysort

clean:
	rm helloworld myecho mysort
all:
	g++ -std=c++11 -Wall helloworld.cpp -o helloworld
	g++ -std=c++11 -Wall myecho.cpp -o myecho

clean:
	rm helloworld myecho
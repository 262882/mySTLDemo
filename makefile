all:
	g++ -std=c++11 -Wall helloworld.cpp -o helloworld
	g++ -std=c++11 -Wall myecho.cpp -o myecho
	g++ -std=c++11 -Wall mysort.cpp -o mysort
	g++ -std=c++11 -Wall mygrep.cpp -o mygrep
	g++ -std=c++11 -Wall -I $(shell pwd) reversefile.cpp utilities/reversefile_utilities.cpp -o reversefile

clean:
	rm helloworld myecho mysort mygrep reversefile

lint:
	cpplint --filter=-legal/copyright *.cpp

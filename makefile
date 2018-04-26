
grafica.png: graph.py datos23.txt
	python graph.py
datos23.txt: 23
	./23 > datos23.txt
23: 23.cpp
c++ 23.cpp -o 23

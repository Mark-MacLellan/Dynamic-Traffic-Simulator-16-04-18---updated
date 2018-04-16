#include "Bus.h"
#include<iostream>

using namespace std;

void Bus::random_dimensions() {
	width = (2 + (rand() % (3 - 1)));		// picks random number from the range 2m - 4m 
	length = (15 + (rand() % (19 - 16)));	// picks random number from the range 15m - 19m
	height = (3 + (rand() % (5 + 4)));	// picks random number from the range 3m - 5m
}

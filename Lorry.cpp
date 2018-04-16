#include "Lorry.h"
#include<iostream>

using namespace std;

void Lorry::random_dimensions() {
	width = rand() % 2 + 2;		// picks random number from the range 2m - 3m 
	length = (8 + (rand() % (12 - 9)));	// picks random number from the range 12m - 19m
	height = rand() % 3 + 3;	// picks random number from the range 3m - 5m
}


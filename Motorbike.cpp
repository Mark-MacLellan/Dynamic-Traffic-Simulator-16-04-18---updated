#include "Motorbike.h"
#include<iostream>

using namespace std;

void Motorbike::random_dimensions() {
	width = rand() % 1 + 1;			// picks random number from the range 1m 
	length = (1 + (rand() % (2 - 2)));	// picks random number from the range 1m - 2m
	height = rand() % 1 + 1;	// picks random number from the range 1m
}

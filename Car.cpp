#include "Car.h"
#include<iostream>

using namespace std;

void Car::random_dimensions() {
	width = rand() % 2 + 1;		// picks random number from the range 1m - 2m 
	length = (2 + (rand() % (6 - 3)));	// picks random number from the range 2m - 6m
	height = rand() % 2 + 1;	// picks random number from the range 1m - 2m
}
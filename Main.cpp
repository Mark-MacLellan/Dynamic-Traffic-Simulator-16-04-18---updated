#include "ROADS.h"
#include "DualCarriageway.h"
#include "SingleCarriageway.h"
#include "SingleTrackRoad.h"
#include "Motorway.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Lorry.h"
#include "Motorbike.h"
#include "Van.h"
// CHANGES WERE STRATED HERE
#include<Windows.h>
#include<conio.h>
#include<stdlib.h>
#include<ctime>
#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>

using namespace std;

SingleTrackRoad example_a;
SingleCarriageway example_b;
DualCarriageway example_c;
Motorway example_d;
int low, high, roadtype, length, lanes = 0, speed_lim = 0;
float sep_dist;
string userroadlength, input = "";

int roadlength(){
	int myNumber = 0;					// Set variable

	while (myNumber == 0){				// Initialise infinite while loop
		cout << "Please enter the length of the road to emulate (realistic limit of 500km).\n" << endl;
		getline(cin, input);			//Accept user input and store it in a string
		stringstream myStream(input);	// Cast to a string stream
		if (myStream >> myNumber)		// If the value stored in myStream can be input to myNumber..
			break;						// .. break, else, keep looping
		cout << "\nInvalid number, please try again.\n" << endl;
	}
	length = stoi(input);				// cast "input" to integer
	return length;						// Return length for further programme operations
}

int setroadtype(){
	int myType = 0, mySpeed = 0, myLanes = 0;

	while (myType == 0){
		cout << "\nSuccessful Input\n\nPlease choose the type of road you wish to define :" << endl;
		cout << " 1. Single track road\n 2. Single carriageway\n 3. Dual carriageway\n 4. Motorway" << endl;
		getline(cin, input);
		stringstream myStream(input);
		if (myStream >> myType)
			break;
		cout << "Invalid selection, please try again." << endl;
	}
	roadtype = stoi(input);

	switch (roadtype){
	case 1:
		while (mySpeed != 20 && mySpeed != 30 && mySpeed != 40 && mySpeed != 50 && mySpeed != 60){
			cout << "Choose an available speed limit (mph): 20, 30, 40, 50, 60." << endl;
			getline(cin, input);
			stringstream myStream(input);
			if (myStream >> mySpeed)
			if (mySpeed == 20 || mySpeed == 30 || mySpeed == 40 || mySpeed == 50 || mySpeed == 60){
				break;
			}
			cout << "Sorry, you haven't chosen a suitable value, try again please." << endl;
		}
		speed_lim = stoi(input);

		example_a.setroad_length(length);
		example_a.getroad_length();
		example_a.setspeed_limit(speed_lim);
		example_a.getspeed_limit();
		example_a.setno_of_lanes(1);
		example_a.getno_of_lanes();
		example_a.draw_road(length, 1);			// Calling draw_road function to layout the user defined road
		cout << endl << endl;
		_getch();


		break;

	case 2:
		while (mySpeed != 20 && mySpeed != 30 && mySpeed != 40 && mySpeed != 50 && mySpeed != 60){
			cout << "Choose an available speed limit (mph): 20, 30, 40, 50, 60." << endl;
			getline(cin, input);
			stringstream myStream(input);
			if (myStream >> mySpeed)
			if (mySpeed == 20 || mySpeed == 30 || mySpeed == 40 || mySpeed == 50 || mySpeed == 60){
				break;
			}
			cout << "Sorry, you haven't chosen a suitable value, try again please." << endl;
		}
		speed_lim = stoi(input);

		example_b.setroad_length(length);
		example_b.getroad_length();
		example_b.setspeed_limit(speed_lim);
		example_b.getspeed_limit();
		example_b.setno_of_lanes(1);
		example_b.getno_of_lanes();
		example_b.draw_road(length, 1);			// Calling draw_road function to layout the user defined road
		cout << endl << endl;
		_getch();

		break;

	case 3:
		while (mySpeed != 30 && mySpeed != 40 && mySpeed != 50 && mySpeed != 60 && mySpeed != 70){
			cout << "Choose an available speed limit (mph): 30, 40, 50, 60, 70." << endl;
			getline(cin, input);
			stringstream myStream(input);
			if (myStream >> mySpeed)
			if (mySpeed == 30 || mySpeed == 40 || mySpeed == 50 || mySpeed == 60 || mySpeed == 70){
				break;
			}
			cout << "Sorry, you haven't chosen a suitable value, try again please." << endl;
		}
		speed_lim = stoi(input);

		example_c.setroad_length(length);
		example_c.getroad_length();
		example_c.setspeed_limit(speed_lim);
		example_c.getspeed_limit();
		example_c.setno_of_lanes(2);
		example_c.getno_of_lanes();
		example_c.draw_road(length, 2);			// Calling draw_road function to layout the user defined road
		cout << endl << endl;
		_getch();

		break;

	case 4:
		while (mySpeed != 50 && mySpeed != 60 && mySpeed != 70){
			cout << "Choose an available speed limit (mph): 50, 60, 70." << endl;
			getline(cin, input);
			stringstream myStream(input);
			if (myStream >> mySpeed)
			if (mySpeed == 50 || mySpeed == 60 || mySpeed == 70){
				break;
			}
			cout << "Sorry, you haven't chosen a suitable value, try again please." << endl;
		}
		speed_lim = stoi(input);

		while (lanes != 2 && lanes != 3 && lanes != 4 && lanes != 5){
			cout << "How many lanes in each direction are required? 2, 3, 4 or 5." << endl;
			getline(cin, input);
			stringstream myStream2(input);
			if (myStream2 >> myLanes)
			if (myLanes == 2 || myLanes == 3 || myLanes == 4 || myLanes == 5)
				break;
			cout << "Sorry, you haven't chosen a suitable value, try again please." << endl;
		}
		lanes = stoi(input);

		example_d.setroad_length(length);
		example_c.getroad_length();
		example_d.setspeed_limit(speed_lim);
		example_d.getspeed_limit();
		example_d.setno_of_lanes(lanes);
		example_d.getno_of_lanes();
		example_d.draw_road(length, lanes);			// Calling draw_road function to layout the user defined road
		cout << endl << endl;
		_getch();
	}

	if (speed_lim == 20){		//These if statements have been added for later functionality
		low = 18, high = 22;	//It has been decided that a speed limit set doesn't mean all vehicles will travel at that speed
	}							//Some will go slower and some will go faster
	if (speed_lim == 30){		//A difference of 10% above and below each limit was added to give a realistic speed variance
		low = 27, high = 33;	//The high and low values are used in the loops further into the main
	}							//They are used to generate random numbers within this range to assign to vehicles
	if (speed_lim == 40){
		low = 36, high = 44;
	}
	if (speed_lim == 50){		// For instance, if the road speed limit is chosen as 50 mph, the vehicles will be able to travel
		low = 45, high = 55;	// as slow as 45 mph or as fast as 55 mph.
	}
	if (speed_lim == 60){
		low = 54, high = 66;
	}
	if (speed_lim == 70){
		low = 63, high = 77;
	}

	return roadtype;
}
int main()
{											// Initialising Road Instances

	int x, y;
	
	void bubbleSort(vector<int>& a);
	void printVector(vector<int> a);
	
	roadlength();
	setroadtype();
	
	//void bubbleSort(vector<Vehicle>& a);
	//void printVector(vector<Vehicle> a);


	int start_s = clock();
											// Initialising Vector of pointers of type vehicle. Vector variable name is vehicle_lanes. The only way of having objects from different...
	vector<Vehicle*> vehicle_lanes;			//  ..classes in the same vector is for each of the intended classes to have the same "parent" class hence creating a "Vehicle" and not a car, van vector etc.
	
	vehicle_lanes.push_back(new Car);		// Using built in vector "pushback" function to add a new instance to the end of the vector.
	vehicle_lanes.push_back(new Van);
	vehicle_lanes.push_back(new Bus);
	vehicle_lanes.push_back(new Lorry);
	vehicle_lanes.push_back(new Motorbike);
	

	vehicle_lanes[0]->set_name("Car");		// Using this notation accesses the object indexed at [x] then -> accesses any of the Vehicles methods (but not the indivdual methods unique to each subclass).
	vehicle_lanes[1]->set_name("Van");		// Here the vehicle name identifiers are set
	vehicle_lanes[2]->set_name("Bus");		
	vehicle_lanes[3]->set_name("Lorry");
	vehicle_lanes[4]->set_name("Motorbike");
	
	int elapsed_time = 1;					// Set our timer
	for (int i = 0; i < 10; i++)			// For loop to increment timer
	{	// Here the vehicle speed are set
		vehicle_lanes[0]->set_max_speed(low + (rand() % (high - low + 1)));	// Using this notation accesses the object indexed 
		vehicle_lanes[1]->set_max_speed(low + (rand() % (high - low + 1)));	//..at [x] then -> accesses any of the Vehicles methods.. 
		vehicle_lanes[2]->set_max_speed(low + (rand() % (high - low + 1)));	//..(but not the indivdual methods unique to each subclass).
		vehicle_lanes[3]->set_max_speed(low + (rand() % (high - low + 1))); //output = min + (rand() % (int)(max - min + 1))
		vehicle_lanes[4]->set_max_speed(low + (rand() % (high - low + 1))); //source:https://stackoverflow.com/questions/7560114/random-number-c-in-some-range
		// This for "vector" loop iterates through the current ("cur")
		// element in the loop and accesses/ prints out the method/ values for that object
		
		for (vector<Vehicle*>::iterator cur = vehicle_lanes.begin(); cur != vehicle_lanes.end(); cur++) {
			
			// Iterator accessing Vehicle Methods for Data
			cout << "\n" << (*cur)->get_name() << " is travelling at " << (*cur)->get_max_speed() << " mph." << endl;		//The * operator gives the item referenced by the iterator, which is a pointer. Then the -> dereferences that pointer.
			
			cout << (*cur)->get_name() << " has travelled a further " << (*cur)->grid_loction_(1, start_s) << " units.\n" << endl;
			// Pause system
			_getch();
			
		}
		// Interator for sorting vehicle order based on time x speed (distance) after each iteration

		for (vector<Vehicle*>::iterator it = vehicle_lanes.begin(); it != vehicle_lanes.end(); it++) {
			(*it)->set_total_dist((*it)->total_dist);
			// Vehicle sort function
			sort(vehicle_lanes.begin(), vehicle_lanes.end(), CompareVehicleLocation);
			//cout << (*it)->get_name() << "'s intermediate distance is " << (*it)->intermediate << endl;
			//cout << (*it)->get_name() << "'s total distance travelled is: " << (*it)->get_ave_speed() << " units." << endl;
			//cout << (*it)->get_name() << "'s grid location is " <<(*it)->grid_location << endl;
			
		}
		elapsed_time++;							// Increasing counter with each loop
		cout << "\nElapsed Time is: " << elapsed_time << " seconds.\n" << endl;
		cout << vehicle_lanes[0]->get_name() << "'s total distance travelled is: " << vehicle_lanes[0]->total_dist << endl;		// Using this notation accesses the object indexed at [x] then -> accesses any of the Vehicles methods (but not the indivdual methods unique to each subclass).
		cout << vehicle_lanes[1]->get_name() << "'s total distance travelled is: " << vehicle_lanes[1]->total_dist << endl;	// Here the vehicle name identifiers are set
		cout << vehicle_lanes[2]->get_name() << "'s total distance travelled is: " << vehicle_lanes[2]->total_dist << endl;
		cout << vehicle_lanes[3]->get_name() << "'s total distance travelled is: " << vehicle_lanes[3]->total_dist << endl;
		cout << vehicle_lanes[4]->get_name() << "'s total distance travelled is: " << vehicle_lanes[4]->total_dist << endl;
	}
	
	//delete &vehicle_lanes;					// Deletes dynamic memory allocation
	system("pause");
	return 0;
}

void bubbleSort(vector<int>& a)
{
	bool swapp = true;
	while (swapp) {
		swapp = false;
		for (size_t i = 0; i < a.size() - 1; i++) {
			if (a[i]>a[i + 1]) {			// If current element is greater than next element
				a[i] += a[i + 1];			// Reassign current element to next one
				a[i + 1] = a[i] - a[i + 1];	// Reassign next element to current one
				a[i] -= a[i + 1];
				swapp = true;
			}
		}
	}
	reverse(a.begin(), a.end());			// Flips order of vector from highest to lowest
}

void printVector(vector<int> a) {
	cout << "Vector Order in terms of Speed: " << endl;
	for (size_t i = 0; i <a.size(); i++) {

		cout << a[i] << " ";

	}
	cout << "\n" << endl;
}
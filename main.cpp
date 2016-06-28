#include <iostream>
#include <string>
#include "Button.h"
#include "Building.h"
#include "Person.h"
#include "Lift.h"
#include "Floor.h"

using namespace std;

int main(){
	int noOfFloors;
	cout << "Enter the number of floors: " << endl;
	cin >> noOfFloors;
	Floor allFloors[noOfFloors];

	FirstFloor fFloor("0");
	allFloors[0] = fFloor;
	for(int i = 1; 1 < noOfFloors-1; i++){
		NormalFloor nFloor(std::to_string(i));
		allFloors[i] = nFloor;
	}
	LastFloor lFloor(std::to_string(noOfFloors-1));
	allFloors[noOfFloors-1] = lFloor;


	cout << "allFloors: " << endl;
	cout << allFloors[0];

	Building building(allFloors);


	return 0;
}
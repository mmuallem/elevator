#ifndef BUILDING_HPP
#define BUILDING_HPP

#include <iostream>
#include <string>
#include "Floor.h"

using namespace std;

class Building{
public:
	Building(){}
	Building(Floor *floors) : floorsArray(floors){}
	Floor getFloorByNumber(int number){
		return floorsArray[number];
	}
private:
	Floor *floorsArray;
};

#endif
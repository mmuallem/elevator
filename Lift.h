#ifndef LIFT_HPP
#define LIFT_HPP

#include <iostream>
#include <string>
#include "Button.h"
#include "Building.h"
#include "Floor.h"

using namespace std;

enum class Direction { Up, Down, StandBy };

class Lift{
public:
	Lift(Button *floorButtons, string currentFloor, int maxWeight, int doorTimerInSeconds, Building building){
		this->floorButtons = floorButtons;
		this->currentFloor = currentFloor;
		this->currentDirection = static_cast<int>(Direction::StandBy);
		this->isDoorOpen = false;
		this->stopsQueue = new string[0];
		this->futureQueue = new string[0];
		this->maxWeight = maxWeight;
		this->currentWeight = 0;
		this->isOverWeight = false;
		this->doorTimerInSeconds = doorTimerInSeconds;
		this->building = building;
	}
	Button* getFloorButtons() {
		return this->floorButtons;
	}
	string getCurrentFloor() {
		return this->currentFloor;
	}
	int getCurrentDirection() {
		return this->currentDirection;
	}
	bool getIsDoorOpen() {
		return this->isDoorOpen;
	}
	string* getStopsQueue() {
		return this->stopsQueue;
	}
	string* getFutureQueue() {
		return this->futureQueue;
	}
	int getMaxWeight() {
		return this->maxWeight;
	}
	bool getIsOverWeight() {
		return this->isOverWeight;
	}
	int getDoorTimerInSeconds() {
		return this->doorTimerInSeconds;
	}
	Building getBuilding() {
		return this->building;
	}

	void setCurrentFloor(string currentFloor){
		this->currentFloor = currentFloor;
	}
	void setCurrentDirection(int currentDirection){
		this->currentDirection = currentDirection;
	}
	void setIsDoorOpen(bool isDoorOpen){
		this->isDoorOpen = isDoorOpen;
	}
	void setCurrentWeight(int currentWeight){
		this->currentWeight = currentWeight;
		if(this->currentWeight >= this->maxWeight){
			this->isOverWeight = true;
		}
		else {
			this->isOverWeight = false;
		}
	}
	
private:
	Button *floorButtons;
	string currentFloor;
	int currentDirection;
	bool isDoorOpen;
	string *stopsQueue;
	string *futureQueue;
	int maxWeight;
	int currentWeight;
	bool isOverWeight;
	int doorTimerInSeconds;
	Building building;
};

#endif

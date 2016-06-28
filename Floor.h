#ifndef FLOOR_HPP
#define FLOOR_HPP

#include <iostream>
#include <string>
#include "Button.h"

using namespace std;

class Floor{
public:
	virtual bool togglebutton(bool value, string buttonName);
};

class FirstFloor: public Floor
{
public:
	FirstFloor(string number) : floorNumber(number){}
	virtual bool togglebutton(bool value, string buttonName = "up"){
		upButton.setIsClicked(value);
	}	
private:
	string floorNumber;
	UpButton upButton;
};

class LastFloor : public Floor
{
public:
	LastFloor(string number) : floorNumber(number){}
	virtual bool togglebutton(bool value, string buttonName = "down"){
		downButton.setIsClicked(value);
	}	
private:
	string floorNumber;
	DownButton downButton;
};


class NormalFloor : public Floor
{
public:
	NormalFloor(string number) : floorNumber(number){}
	virtual bool togglebutton(bool value, string buttonName){
		if(buttonName == "down"){
			downButton.setIsClicked(value);
		}
		if(buttonName == "up"){
			upButton.setIsClicked(value);
		}
	}	
private:
	string floorNumber;
	DownButton downButton;
	UpButton upButton;
};

#endif
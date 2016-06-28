#ifndef FLOOR_HPP
#define FLOOR_HPP

#include <iostream>
#include <ostream>
#include <string>
#include "Button.h"
#include "Person.h"

using namespace std;

class Floor{
public:
	Floor(){}
	virtual bool togglebutton(bool value, string buttonName){}

	string floorNumber;
};

class FirstFloor : public Floor
{
public:
	FirstFloor(){}
	FirstFloor(string number) : floorNumber(number){}
	FirstFloor(string number, Person *_people) : floorNumber(number), people(_people){}

	virtual void setPeople(Person *_people){
		this->people = _people;
	}

	string getFloorNumber(){
		return this->floorNumber;
	}

	bool togglebutton(bool value, string buttonName = "up"){
		upButton.setIsClicked(value);
	}	
	
	std::ostream& operator<< (std::ostream& stream, const FirstFloor& f) {
		stream << f.getFloorNumber() << '\n';
		return stream;
	}

private:
	string floorNumber;
	Person *people;
	UpButton upButton;
};

class LastFloor : public Floor
{
public:
	LastFloor(){}
	LastFloor(string number) : floorNumber(number){}
	LastFloor(string number, Person *_people) : floorNumber(number), people(_people){}

	virtual void setPeople(Person *_people){
		this->people = _people;
	}

	virtual bool togglebutton(bool value, string buttonName = "down"){
		downButton.setIsClicked(value);
	}	
private:
	string floorNumber;
	Person *people;
	DownButton downButton;
};


class NormalFloor : public Floor
{
public:
	NormalFloor(){}
	NormalFloor(string number) : floorNumber(number){}
	NormalFloor(string number, Person *_people) : floorNumber(number), people(_people){}

	virtual void setPeople(Person *_people){
		this->people = _people;
	}

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
	Person *people;
	DownButton downButton;
	UpButton upButton;
};


#endif
#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

using namespace std;

class Person{
public:
	Person(){ }
	Person(int _weight) : weight(_weight){}
	int getWeight(){
		return this->weight;
	} 

private:
	int weight;
};

#endif
#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <iostream>
#include <string>

using namespace std;

class Button{
public:
	virtual void setIsClicked(bool bl){}
};

class UpButton : public Button{
public:
	UpButton(){}
	virtual void setIsClicked(bool bl){
		this->isClicked = bl;
	}
private:
	bool isClicked;
};

class DownButton : public Button{
public:
	DownButton(){}
	virtual void setIsClicked(bool bl){
		this->isClicked = bl;
	}
private:
	bool isClicked;
};

#endif
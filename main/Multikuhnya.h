#pragma once
#include<string>
#include <iostream>
using std::string;

class Multikuhnya
{
	string name;
	int cookingTime;
public:
	Multikuhnya() {
		name = "No name";
		cookingTime = 0;
	}
	Multikuhnya(string name, int cookingTime)
	{
		this->name = name;
		this->cookingTime = cookingTime;
	}
	string getName()const { return name; }
	int getCookingTime()const { return cookingTime; }

	const bool operator <(const Multikuhnya& obj)const&
	{
		return this->cookingTime < obj.cookingTime;
	}
};

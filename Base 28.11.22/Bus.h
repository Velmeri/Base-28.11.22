#pragma once
#include "Vehicle.h"
class Bus :
    private Vehicle
{
	Base base;
	double petrol;
	double max_petrol;
	int people;
	int max_people;
public:
	Bus(int people, int max_people, double petrol, double max_petrol) : Vehicle(petrol, max_petrol) {
		this->people = people;
		this->max_people = max_people;
		this->petrol = petrol;
		this->max_petrol = petrol;
	}
	void arrive();
	void leave();
	int GetPeopleCount();
	int GetMaxPeople();
};


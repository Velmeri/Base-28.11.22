#pragma once
#include "Vehicle.h"
class Truck :
    public Vehicle
{
	Base base;
	double petrol;
	double max_petrol;
	double loud;
	double max_loud;
private:
	Truck(unsigned int load, unsigned int max_loud, double petrol, double max_petrol) : Vehicle(petrol, max_petrol){
		this->loud = load;
		this->max_loud = max_loud;
		this->petrol = petrol;
		this->max_petrol = max_petrol;
	}
	void arrive();
	void leave();
	double GetCurrentLoud();
	double GetMaxLoud();
};


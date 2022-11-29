#pragma once

#include "Base.h"
#include <iostream>

class Vehicle
{	
private:
	Base base;
	double petrol_amount;
	double tank_volume;
public:
	Vehicle(double petrol_amount, double tank_volume) {
		this->petrol_amount = petrol_amount;
		this->tank_volume = tank_volume;
	}

	double getTankVolume() const;
	double getPetrolAmount() const;
	void arrive();
	void leave();
};


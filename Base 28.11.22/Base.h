#pragma once
class Base
{
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base;

public:
	void arrive(int people, int vehicles, double petrol, double goods);
	int GetPeople();
	double GetPetrol();
	double GetLoud();
};
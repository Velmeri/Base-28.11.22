#include "Base.h"

void Base::arrive(int people, int vehicles, double petrol, double goods)
{
	people_on_base += people;
	vehicles_on_base += vehicles;
	petrol_on_base += petrol;
	goods_on_base += goods;
}

int Base::GetPeople() {
	return people_on_base;
}

double Base::GetPetrol()
{
	return petrol_on_base;
}

double Base::GetLoud()
{
	return goods_on_base;
}

int Base::people_on_base = 0;
int Base::vehicles_on_base = 0;
double Base::petrol_on_base = 0;
double Base::goods_on_base = 0;
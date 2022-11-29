#include "Truck.h"

void Truck::arrive()
{
	base.arrive(1, 1, petrol, loud);
}

void Truck::leave()
{
    if (base.GetPetrol() > 0) {
        base.arrive(-1, -1, -max_petrol, -max_loud);
        if (base.GetPetrol() < 0)
            base.arrive(0, 0, !base.GetPetrol(), 0); //   Не даю топливу опустится ниже нуля
    }
    else
        std::cout << "Not enough fuel\n";
    if (base.GetLoud() < 0)
        base.arrive(0, 0, 0, !base.GetLoud());
}

double Truck::GetCurrentLoud()
{
    return loud;
}

double Truck::GetMaxLoud()
{
    return max_loud;
}
#include "Vehicle.h"

double Vehicle::getTankVolume() const
{
    return tank_volume;
}

double Vehicle::getPetrolAmount() const
{
    return petrol_amount;
}

void Vehicle::arrive()
{
    base.arrive(1, 1, petrol_amount, 0);
}

void Vehicle::leave() {    //   я мог бы переименовать функцию arrive в redact, но и так сойдёт
    if (base.GetPetrol() > 0) {
        base.arrive(-1, -1, -petrol_amount, 0);
        if (base.GetPetrol() < 0)
            base.arrive(0, 0, !base.GetPetrol(), 0); //   Не даю топливу опустится ниже нуля
    }
    else
        std::cout << "Not enough fuel\n";
}
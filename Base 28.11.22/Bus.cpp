#include "Bus.h"

void Bus::arrive()
{
	base.arrive(people, 1, petrol, 0);
}

void Bus::leave()
{
    if (base.GetPetrol() > 0) {
        base.arrive(-max_people, -1, -max_petrol, 0);
        if (base.GetPetrol() < 0)
            base.arrive(0, 0, !base.GetPetrol(), 0); //   Не даю топливу опустится ниже нуля
    }
    else
        std::cout << "Not enough fuel\n";

    if (base.GetPeople() < 0) {
        base.arrive(!base.GetPeople(), 0, 0, 0);
    }
}

int Bus::GetPeopleCount()
{
    return people;
}

int Bus::GetMaxPeople()
{
    return max_people;
}

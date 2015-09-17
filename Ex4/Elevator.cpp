

#include "Elevator.hpp"
#include <vector>
#include "Person.hpp"

Elevator::Elevator() {
	this->energyConsumed = 0;
	this->currentFloor = 1;
}

int Elevator::getFloor() {
	return this->currentFloor;
}
double Elevator::getEnergyConsumed() {
	return 0;
}
void Elevator::moveToFloor(int floor) {
	this->currentFloor = floor;
}
int Elevator::getNumPeople() {
	return containedPeople.size();
}
Person Elevator::getPerson(int i) {
	return containedPeople.at(i);
}

void Elevator::addPeople(std::vector<Person> people) {
	for (int i = 0; i < people.size(); i++)
		containedPeople.push_back(people.at(i));
}
std::vector<Person> Elevator::removeArrivedPeople() {
	std::vector<Person> stay, leave;
	for (int i = 0; i < containedPeople.size(); i++)
		if (containedPeople.at(i).getDestinationFloor() == currentFloor)
			leave.push_back(containedPeople.at(i));
		else
			stay.push_back(containedPeople.at(i));

	this->containedPeople = stay;
	return leave;
}


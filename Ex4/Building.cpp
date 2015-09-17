/*
 * Building.cpp
 *
 *  Created on: 17.09.2015
 *      Author: Hamza Khan Niazi
 */

#include "Floor.hpp"
#include "Elevator.hpp"
#include "Building.hpp"

Building::Building(int numFloors) {
	for (int i = 0; i < numFloors; i++)
		floors.push_back(Floor());
}
Elevator& Building::getElevator() {
	return elevator;
}
Floor& Building::getFloor(int floor) {
	return floors.at(floor);
}

int Building::getNumOfFloors() {
	return floors.size();
}

void Building::letPeopleIn() {
	elevator.addPeople(floors.at(elevator.getFloor()).removeAllPeople());
}
void Building::moveElevatorToFloor(int i) {
	elevator.moveToFloor(i);
}
void Building::addWaitingPerson(int floor, Person p) {
	floors.at(floor).addWaitingPerson(p);
}
std::vector<Person> Building::removeArrivedPeople() {
	return elevator.removeArrivedPeople();
}

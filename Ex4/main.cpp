/*
 * main.cpp
 *
 *  Created on: 17.09.2015
 *      Author: Hamza Khan Niazi
 */
#include "Building.hpp"
int main() {
	Building b(3);
	b.addWaitingPerson(0, Person(2)); // person in floor 0 wants to floor 2
	b.addWaitingPerson(1, Person(0)); // person in floor 1 wants to floor 0
	b.addWaitingPerson(2, Person(0)); // person in floor 2 wants to floor 0

	for (int i = 0; i < 9; i++) {
		b.moveElevatorToFloor(i % 3);
		b.removeArrivedPeople();
		b.letPeopleIn();
	}
}

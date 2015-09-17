/*
 * Person.cpp
 *
 *  Created on: 17.09.2015
 *      Author: Hamza Khan Niazi
 */

#include "Person.hpp"

Person::Person(int destinationFloor) {

	this->destinationFloor = destinationFloor;

}
Person::Person(const Person& other) {
this->destinationFloor = other.destinationFloor;
}
int Person::getDestinationFloor() const {
	return destinationFloor;
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}


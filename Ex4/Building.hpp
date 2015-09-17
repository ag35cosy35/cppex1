
#ifndef BUILDING_HPP_
#define BUILDING_HPP_


#include "Floor.hpp"
#include "Elevator.hpp"

class Building {
public:
	Building(int numberOfFloors); // create a Building with given number of floors
	int getNumOfFloors(); // get number of floors
	Floor& getFloor(int floor); // get a certain floor
	Elevator& getElevator(); // get the elevator

	void letPeopleIn(); // let people on current floor into elevator
	void moveElevatorToFloor(int i); // move the elevator to a given floor
	void addWaitingPerson(int floor, Person p); // add a person to a given floor
	std::vector<Person> removeArrivedPeople(); // remove people which arrived at their destination from the elevator on the current floor
private:
	std::vector<Floor> floors; // floors of this building
	Elevator elevator; // the elevator
};

#endif

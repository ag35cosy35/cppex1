/*
 	 * Person.hpp
 *
 *  Created on: 17.09.2015
 *      Author: Hamza Khan Niazi
 */

#ifndef PERSON_HPP_
#define PERSON_HPP_

class Person {
public:
	Person(int destinationFloor); // create a person with given destination
	Person(const Person& other); // copy constructor
	~Person();
	int getDestinationFloor() const;


private:
	int destinationFloor;

};

#endif /* PERSON_HPP_ */

/*
 * functions.cpp
 *
 *  Created on: 17.09.2015
 *      Author: Hamza Khan Niazi
 */




#include <iostream>
#include "functions.hpp"

void printStars(int n){
	for(int i = 0; i < n; i++)
		std::cout << "*";
	std::cout << std::endl;
}

void printFigure(int n){
	for(int i = n; i > 0; i--)
		printStars(i);
	for(int i = 2; i <= n; i++)
		printStars(i);
}

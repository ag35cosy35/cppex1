/*
 * functions.cpp
 *
 *  Created on: 17.09.2015
 *      Author: Hamza Khan Niazi
 */

#include <iostream>
#include "functions.hpp"

void rofl::printStars(int n) {
	for (int i = 0; i < n; i++)
		std::cout << "*";
	std::cout << std::endl;
}

void rofl::printChars(int n) {
	for (int i = 0; i < n; i++)
		std::cout << rofl::nextChar();
	std::cout << std::endl;
}

void rofl::printFigure(int n) {
	for (int i = n; i > 0; i--)
		//printStars(i);
		printChars(i);
	for (int i = 2; i <= n; i++)
		//printStars(i);
		printChars(i);
}

static char c = 'a';
char rofl::nextChar() {
	if(c == 'z')
		c = 'a';
	char r = c;
	c++;
	return r;
}

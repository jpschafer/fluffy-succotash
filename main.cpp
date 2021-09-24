/* 
 * Shows how to use Library
 */

#include <iostream>
#include <string>
#include "MundyMath.h"

int main() {
	std::cout << "Welcome to the Fluffy Succotash App! Let's do some Math! :) \n";
	std::cout << "2+2=" + to_string(MundyMath::add(2, 2).getResult()) + "\n";
	std::cout << "2-2=" + to_string(MundyMath::subtract(2, 2).getResult()) + "\n";
	std::cout << "3*3=" + to_string(MundyMath::multiply(2, 2).getResult()) + "\n";
	std::cout << "3/3=" + to_string(MundyMath::divide(2, 2).getResult()) + "\n";
	std::cout << "sqrt(9)=" + to_string(MundyMath::squareRoot(9).getResult()) + "\n";
	std::cout << "10^2=" + to_string(MundyMath::power(10, 2).getResult()) + "\n";
	std::cout << "That's enough math for today! Goodbye! :) \n";
	return 0;
}

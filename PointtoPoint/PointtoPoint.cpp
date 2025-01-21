// PointtoPoint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	char ignore;

    std::cout << "Welcome to the midpoint calculator!\n";
	double x1, x2, y1, y2;
	std::cout << "Enter the first point in the format (x1,y2) ";
	std::cin >> ignore >> x1 >> ignore >> y1 >> ignore;
	std::cout << "Ener the second point in the format (x2,y2) ";
	std::cin >> ignore >> x2 >> ignore >> y2 >> ignore;
	std::cout << "\nThe points you entered are (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ").\n";
	double xMid = (x1 + x2) / 2;
	double yMid = (y1 + y2) / 2;
	std::cout << "The midpoint of the points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is (" << xMid << ", " << yMid << ").\n";

	std::cout << "\nThank you for using the midpoint calculator!\n";
}
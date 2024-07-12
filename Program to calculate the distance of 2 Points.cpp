// Program to calculate the distance of 2 Points.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
1)Read the coordinates of 2 3D points from the user.Point is represented by x, y, and z coordinates.
2)Calculate and print the distance of the first point from origin (0,0,0)
3)Calculate and print the distance of the second point from origin,
4) Calculate and print the distance between the two points.
*/

//global function
double distanceOf2Points(double x1, double y1, double z1, double x2, double y2, double z2) 
{
	double result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));


	return result;
}


int main()
{
	//Point values 01
	int x1 = 1, y1 = 1, z1 = 1;
	//Point values 02
	int x2 = 3, y2 = 4, z2 = 5;



	cout << "Please entre the coordinates of point 01: " << '\n';
	cin >> x1 >> y1 >> z1; //Use space in between the coordinates x1, y1, z1, when entering the values above.

	cout << "Please enter the coordinates of point-02:" << '\n';
	cin >> x2 >> y2 >> z2; //Use space in between the coordinates x2, y2, z2, when entering the values above.



	double distanceBetweenPoints = distanceOf2Points(x1, y1, z1, x2, y2, z2);

	double distanceOfFirstOrigin = distanceOf2Points(x1, y1, z1, 0, 0, 0);

	double distanceOfSecondOrigin = distanceOf2Points(x2, y2, z2, 0, 0, 0);

	cout << fixed << setprecision(2); // rounding the result into two decimals 

	cout << "The distance between points " "(" <<x1<< "," << y1 << ","<< z1 << ") and (0, 0, 0) is: \n" <<distanceOfFirstOrigin << endl;

	cout << "The distance between points " "(" << x2 << "," << y2 << "," << z2 << ") and (0, 0, 0) is: \n" << distanceOfSecondOrigin << endl;

	cout << "The distance between points " "(" << x1 << "," << y1 << "," << z1 << ") and" "(" <<x2 << "," <<y2 << "," <<z2 << ")" "is: \n" << distanceBetweenPoints << endl;



};


#include <iostream>
#include <math.h>
#define pi 3.1416

using namespace std;

double distance(double x1, double y1, double x2, double y2){
	double a = pow(x2 - x1, 2) + pow(y2 - y1, 2);
	return sqrt(a);
}

double radius(double x1, double y1, double x2, double y2){
	 return distance(x1,y1,x2,y2);
}

double circumference(double rad){
	return 2*pi*rad;
}

double area(double rad){
	return pi*pow(rad,2);
}

int main(){
	double x1, y1, x2, y2;
	cout << "x1 = "; cin >> x1;
	cout << "y1 = "; cin >> y1;
	cout << "x2 = "; cin >> x2;
	cout << "y2 = "; cin >> y2;
	cout << "radius = " << radius(x1, y1, x2, y2) << endl;
	cout << "diameter = " << 2*radius(x1, y1, x2, y2) << endl;
	cout << "circumference = " << circumference(radius(x1, y1, x2, y2)) << endl;
	cout << "area = " << area(radius(x1, y1, x2, y2));
	
	
}

#include <iostream>
#include <cmath>
#include "Circle.h"
#include "GenPoint.h"
#include "Color.h"
#include "graph1.h"

const double Circle::PI = 3.14159265;
Circle::Circle()
{
	radius = 0;
	center.setPoint(0, 0);
}
Circle::Circle(GenPoint center, int radius, Color c)
{
	this->center = center;
	this->radius = radius;
	color.setColor(c.getRed(), c.getGreen(), c.getBlue());
}
void Circle::setCenter(GenPoint center)
{
	center.setPoint(center.getX(), center.getY());
}
void Circle::setRadius(int radius)
{
	this->radius = radius;
}
double Circle::getPerimeter()
{
	double perimeter;
	perimeter = 2 * PI * radius;

	return(perimeter);
}
double Circle::getArea()
{
	double area;
	area = pow( PI*radius, 2);

	return(area);

}
void Circle::print()
{
	gout << setPos(0, 400) << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endg;
	

	gout << setPos(200, 405) << "Shape info Follows for: Circle" << endg;
	

	gout << setPos(200, 420)<< "Center Point: " << center.getX() << " " << center.getY() << endg;
	

	gout << setPos(200, 435) << "Radius: " << radius << endg;
	
	gout << setPos(200, 450)<< "Perimeter: " << getPerimeter() << endg;
}
void Circle::draw()
{
	int object;
	object = drawCircle(radius, center.getX(), center.getY());
	::setColor(object, color.getRed(), color.getGreen(), color.getBlue());

}

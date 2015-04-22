#include <iostream>
#include <cmath>
#include "Circle.h"
#include "GenPoint.h"
#include "Color.h"
#include "graph1.h"


Circle::Circle()
{
	radius = 0;
	center.setPoint(0, 0);
}
Circle::Circle(GenPoint center, int radius, Color c)
{
	this->center = center;
	this->radius = radius;
	c.setColor(c.getRed, c.getGreen, c.getBlue);
}
void Circle::setCenter(GenPoint center)
{
	center.setPoint(center.getX, center.getY);
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
	gout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endg;
	setPos(0, 400);

	gout << "Shape info Follows for: Circle" << endg;
	setPos(200, 405);

	gout << "Center Point: " << center.getX << " " << center.getY << endg;
	setPos(200, 420);

	gout << "Radius: " << radius << endg;
	setPos(200, 435);

	gout << "Perimeter: " << getPerimeter() << endg;
	setPos(200, 450);
}
void Circle::draw()
{
	drawCircle(radius, center.getX(), center.getY());

}

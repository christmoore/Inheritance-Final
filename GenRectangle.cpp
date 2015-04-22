#include <iostream>
#include "graph1.h"
#include <cmath>
#include "GenRectangle.h"


GenRectangle::GenRectangle()
{
	a.setPoint(0,0);
	b.setPoint(0,0);
	c.setPoint(0,0);
	d.setPoint(0,0);
	color.setColor(0,0,0);
}

GenRectangle::GenRectangle(GenPoint ul, GenPoint lr, Color c)
{
	a.setPoint(ul.getX(),ul.getY());
	c.setPoint(lr.getX(),lr.getY());
	color.setColor(c.getRed(),c.getGreen(),c.getBlue());
}

void GenRectangle::setPoints(GenPoint ul, GenPoint lr)
{
	GenPoint b(lr.getX(), ul.getY());
	GenPoint d(ul.getX(), ul.getY());
	Quadrilaterl::setPoint(ul,b,lr,d);

}

double GenRectangle::getArea()
{
	 double Area;
	 double side1 = (sqrt( (pow(a.getX() - b.getX(), 2.0)) + (pow(a.getY() - b.getY(), 2.0))));
	 double side2 = (sqrt( (pow(b.getX() - c.getX(), 2.0)) + (pow(b.getY() - c.getY(), 2.0))));
	 Area = side1 * side2;
	 return Area;
}

void GenRectangle::print()
{
	//Print Area
	gout<<setPos(0,15)<<"Rectangle Information"<<endg;
	gout<<setPos(0,30)<<"Area: "<< area <<endg;

	//Print Line
	gout<<setPos(0,380)<<"-------------------------------------------------------------------------------------------------"<<endg;
	//Info
	gout<<setPos(150,385)<<"Shape info follows for: Quadrilateral"<<endg;
	gout<<setPos(150,400)<<"Point a: ("<< ul.getX()<<","<<ul.getY()<<")"<<endg;
	gout<<setPos(150,415)<<"Point b: ("<< b.getX()<<","<<b.getY()<<")"<<endg;
	gout<<setPos(150,430)<<"Point c: ("<< lr.getX()<<","<<lr.getY()<<")"<<endg;
	gout<<setPos(150,445)<<"Point d: ("<< d.getX()<<","<<d.getY()<<")"<<endg;
	gout<<setPos(150,460)<<"Perimeter: "<< getPerimeter() <<endg;
}

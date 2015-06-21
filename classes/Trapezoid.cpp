#include "Trapezoid.h"
#include <cmath>
#include "graph1.h"

Trapezoid::Trapezoid()
{
	a.setPoint(0,0);
	b.setPoint(0,0);
	c.setPoint(0,0);
	d.setPoint(0,0);
	color.setColor(0,0,0);
}
Trapezoid::Trapezoid(GenPoint a, GenPoint b, GenPoint c, GenPoint d, Color color)
{
	this->a.setPoint(a.getX(), a.getY());
	this->b.setPoint(b.getX(), b.getY());
	this->c.setPoint(c.getX(), c.getY());
	this->d.setPoint(d.getX(), d.getY());
	this->color.setColor(color.getRed(), color.getGreen(), color.getBlue());
}
void Trapezoid::setPoints(GenPoint a, GenPoint b, GenPoint c, GenPoint d)
{
	this->a.setPoint(a.getX(), a.getY());
	this->b.setPoint(b.getX(), b.getY());
	this->c.setPoint(c.getX(), c.getY());
	this->d.setPoint(d.getX(), d.getY());
}
double Trapezoid::getArea()
{

	double base1 = sqrt(pow(a.getX() - b.getX(), 2.0)+pow(a.getY()- b.getY(), 2.0));
	double base2 = sqrt(pow(c.getX() - d.getX(), 2.0)+pow(c.getY()- d.getY(), 2.0));
	double height = abs(c.getY() - a.getY());
	double area = 0.5 *(base1+base2)*height;
	return area;
}
void Trapezoid::print()
{
	//Print Area
	gout<<setPos(0,15)<<"Trapezoid Information"<<endg;
	gout<<setPos(0,30)<<"Area: "<< getArea() <<endg;

	//Print Line
	gout<<setPos(0,380)<<"-------------------------------------------------------------------------------------------------"<<endg;
	//Info
	gout<<setPos(150,385)<<"Shape info follows for: Quadrilateral"<<endg;
	gout<<setPos(150,400)<<"Point a: ("<< a.getX()<<","<<a.getY()<<")"<<endg;
	gout<<setPos(150,415)<<"Point b: ("<< b.getX()<<","<<b.getY()<<")"<<endg;
	gout<<setPos(150,430)<<"Point c: ("<< c.getX()<<","<<c.getY()<<")"<<endg;
	gout<<setPos(150,445)<<"Point d: ("<< d.getX()<<","<<d.getY()<<")"<<endg;
	gout<<setPos(150,460)<<"Perimeter: "<< getPerimeter() <<endg;
}

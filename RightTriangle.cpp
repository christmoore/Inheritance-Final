#include <iostream>
#include "RightTriangle.h"
#include "Triangle.h"
#include "graph1.h"






RightTriangle::RightTriangle()
{
	this->a.setPoint(0,0);
	this->b.setPoint(0,0);
	this->c.setPoint(0,0);

}
RightTriangle::RightTriangle(GenPoint vertex, int height, int base, Color color)
{
	vertex.setPoint(a.getX(),a.getY());
	

	b.setPoint(vertex.getX(),vertex.getY()+height);
	c.setPoint(vertex.getX()+base,vertex.getY());


	this->color.setColor(color.getRed(),color.getGreen(),color.getBlue());
}
void RightTriangle::print()
{

	gout<<setPos(0,15)<<"Right Triangle"<<endg;
	gout<<setPos(0,400)<<"--------------------------------------------------------------------------------------------------------------"<<endg;
	gout<<setPos(200,405)<<"Shape info Follows for: Quadrilateral"<<endg;
	gout<<setPos(200,420)<<"Point a: ("<<a.getX()<<","<<a.getY()<<")"<<endg;
	gout<<setPos(200,435)<<"Point b: ("<<b.getX()<<","<<b.getY()<<")"<<endg;
	gout<<setPos(200,450)<<"Point c: ("<<c.getX()<<","<<c.getY()<<")"<<endg;
	gout<<setPos(200,480)<<"Perimeter: "<<getPerimeter()<<" "<<"Area: "<<getArea()<<endg;
}

#include "Triangle.h"
#include <cmath>
#include "graph1.h"




Triangle::Triangle()
{
	a.setPoint(0,0);
	b.setPoint(0,0);
	c.setPoint(0,0);

	
}
Triangle::Triangle(GenPoint a, GenPoint b, GenPoint c, Color color)
{
	this->a.setPoint(a.getX(), a.getY());
	this->b.setPoint(b.getX(), b.getY());
	this->c.setPoint(c.getX(), c.getY());
	this->color.setColor(color.getRed(),color.getGreen(),color.getBlue());
}
void Triangle::setPoints(GenPoint a, GenPoint b, GenPoint c)
{
	a.setPoint(a.getX(),a.getY());
	b.setPoint(b.getX(),b.getY());
	c.setPoint(c.getX(),b.getY());
	this->color.setColor(color.getRed(),color.getGreen(),color.getBlue());
}
double Triangle::getArea()
{

 double side1=sqrt((pow(a.getX()-b.getX(),2.0))+
		(pow(a.getY()-b.getY(),2.0)));
 double side2=sqrt((pow(b.getX()-c.getX(),2.0))+
		(pow(b.getY()-c.getY(),2.0)));
 double side3=sqrt((pow(c.getX()-a.getX(),2.0))+
		(pow(c.getY()-a.getY(),2.0)));

  double s = (side1 + side2 + side3)/2.0;  
  double area = sqrt(s*(s-side1)*(s-side2)*(s-side3));

  return (area);
}
double Triangle::getPerimeter()
{
double side1=sqrt((pow(a.getX()-b.getX(),2.0))+
		(pow(a.getY()-b.getY(),2.0)));
 double side2=sqrt((pow(b.getX()-c.getX(),2.0))+
		(pow(b.getY()-c.getY(),2.0)));
 double side3=sqrt((pow(c.getX()-a.getX(),2.0))+
		(pow(c.getY()-a.getY(),2.0)));

 double perimeter=(side1 + side2 + side3);

 return(perimeter);
}
void Triangle::print()
{
	
	gout<<setPos(0,400)<<"--------------------------------------------------------------------------------------------------------------"<<endg;
	gout<<setPos(200,405)<<"Shape info Follows for: Triangle"<<endg;
	gout<<setPos(200,420)<<"Point a: ("<<a.getX()<<","<<a.getY()<<")"<<endg;
	gout<<setPos(200,435)<<"Point b: ("<<b.getX()<<","<<b.getY()<<")"<<endg;
	gout<<setPos(200,450)<<"Point c: ("<<c.getX()<<","<<c.getY()<<")"<<endg;
	gout<<setPos(200,465)<<"Perimeter: "<<getPerimeter()<<" "<<"Area: "<<getArea()<<endg;
}
void Triangle::draw()
{
	int a1;
	int b1;
	int c1;
	
	a1=drawLine(a.getX(),a.getY(),b.getX(),b.getY(),1);
	::setColor(a1,color.getRed(),color.getGreen(),color.getBlue());
	b1=drawLine(b.getX(),b.getY(),c.getX(),c.getY(),1);
	::setColor(b1,color.getRed(),color.getGreen(),color.getBlue());
	c1=drawLine(c.getX(),c.getY(),a.getX(),a.getY(),1);
	::setColor(c1,color.getRed(),color.getGreen(),color.getBlue());
	

}

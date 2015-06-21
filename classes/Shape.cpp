#include "Shape.h"


Shape::Shape()
{
	color.setColor(0, 0, 0);
} //Default Constructor - sets color to (0,0,0)
Color Shape::getColor()
{
	return color;
}//Getter for Color
void Shape::setColor(Color color)
{
	color.setColor(color.getRed(), color.getGreen(), color.getBlue());
}//Setter for Color

#include "Circle.h"

Circle::Circle(int w, int h)
{
	//Pointer: (stored on heap)
	//Circle* pointerCircle = new Circle(w, h);
	//Referentie: (stored on stack)
	//Circle circle = Circle(w, h);
	this->width = w;
	this->height = h;
}

float Circle::area()
{
	return 0.0f;
}

void Circle::draw()
{
	
}

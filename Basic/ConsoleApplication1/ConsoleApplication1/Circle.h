#pragma once
#include "ShapeBase.h"
class Circle : public ShapeBase
{
private:
	int width, height;
public:
	Circle(int w, int h);
	float area();
	void draw();
};
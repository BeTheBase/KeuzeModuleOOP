#pragma once

#include <string>

class ShapeBase
{
	public:
		ShapeBase();
		void setTransparency(float alpha);
		virtual float area();
		virtual void draw();
};
#pragma once

#include "IShape.h"

class Rectangle : public IShape
{
public:
	void Size() override;
	void Draw() override;

	Rectangle(int num1, int num2);

private:
	int width;
	int height;
	int area;
};
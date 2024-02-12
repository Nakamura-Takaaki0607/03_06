#pragma once

#include "IShape.h"

class Circle : public IShape
{
public:
	void Size() override;
	void Draw() override;

	Circle(float i);

private:
	float num;
};
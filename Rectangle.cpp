#include "Rectangle.h"

#include <stdio.h>

Rectangle::Rectangle(int num1, int num2) {
	width = num1;
	height = num2;
	area = 0;
}

void Rectangle::Size() {
	area = width * height;
}

void Rectangle::Draw() {
	printf("��` : %d\n", area);
}
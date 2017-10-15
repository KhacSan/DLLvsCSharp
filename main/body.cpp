#include"stdafx.h"
#include "Header.h"


MyClass::MyClass(double var_x, double var_y) {
	x = var_x;
	y = var_y;
}


double MyClass::sumX_Y() {
	return x + y;
}

MyClass::~MyClass()
{
}
// CppClassDLL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"C:\Users\San\Desktop\DLLvsCSharp\main\Header.h"
#include"C:\Users\San\Desktop\DLLvsCSharp\main\body.cpp"

extern "C" __declspec(dllexport) double sumTow(double var_x, double var_y)


{
	MyClass mc(var_x, var_y);

    return mc.sumX_Y();
}


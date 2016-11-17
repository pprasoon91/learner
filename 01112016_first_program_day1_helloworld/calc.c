#include "abc.h"

int add (int a, int b)
{
	int c = 0;
	c=a+b;
	return c;
}

int sub (int a, int b)
{
	int c = 0;
	c=a-b;
	return c;
}

int mul (int a, int b)
{
	int c = 0;
	c=a*b;
	return c;
}

float area_circle (float r)
{
	float area;
	area=(3.141)*r*r;
	return area;
}

float area_square (float a)
{
	float area;
	area=a*a;
	return area;
}


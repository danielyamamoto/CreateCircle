#pragma once
#include "Pixels.h"

class Circle {
	Pixels pixel;
	int x, y, d;

public:
	void init();
	void draw();
	void update();
	void pixCircle(int x0, int y0, int rad, int r, int g, int b);
};
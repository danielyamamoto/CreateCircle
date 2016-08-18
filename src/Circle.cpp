#include "Circle.h"

void Circle::init() {
	pixel.init();
}

void Circle::draw() {
	pixel.draw();
}

void Circle::update() {
	pixel.getPixel();
}

void Circle::pixCircle(int x0, int y0, int rad, int r, int g, int b) {
	pixel.putPixel(x0, y0 + rad, r, g, b);
	pixel.putPixel(x0, y0 - rad, r, g, b);
	pixel.putPixel(x0 + rad, y0, r, g, b);
	pixel.putPixel(x0 - rad, y0, r, g, b);
	x = 0, y = rad;
	d = pow(x, 2) + (2 * x) - y + 1;   
	
	//dSE = 2x - 2y + 5,  dE = 2x + 3;

	while (x <= y) {
		if (d < 0) {
			d += (2 * x) + 3; //dE
		}
		else {
			d += (2 * x) - (2 * y) + 5; //dSE
			y--;
		}
		x++;
		pixel.putPixel(x0 + x, y0 + y, r, g, b); // a, b    //1
		pixel.putPixel(x0 + x, y0 - y, r, g, b); // a, -b   //2
		pixel.putPixel(x0 + y, y0 + x, r, g, b); // b, a    //3 
		pixel.putPixel(x0 + y, y0 - x, r, g, b); // b, -a   //4
		pixel.putPixel(x0 - y, y0 + x, r, g, b); // -a, b   //5
		pixel.putPixel(x0 - y, y0 - x, r, g, b); // -a, -b  //6
		pixel.putPixel(x0 - x, y0 + y, r, g, b); // -b, a   //7
		pixel.putPixel(x0 - x, y0 - y, r, g, b); // -b, -a  //8
	} // While
} // Circle


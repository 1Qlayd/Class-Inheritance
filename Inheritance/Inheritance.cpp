#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Point {
public:
	int x, y;
	int GetX() const { return x; }
};

class ColoredPoint : public Point {
public:
	int color;
	char name[10];

	ColoredPoint(int a = 0, int b = 0, int c = 0) {
		x = a;
		y = b;
		color = c;
	}
};

class Line {
public:
	Point p1, p2;

	Line(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0) {
		p1.x = x1;
		p1.y = y1;
		p2.x = x2;
		p2.y = y2;
	}
};
class Polyline {
	Point m[10];
	int color;
};
int main()
{
	ColoredPoint point1(20, 20),
		point2(110, 20),
		point3(65, 210),
		pointA(60, 230),
		pointB(115, 25),
		pointC(5, 25);
	Line line(10, 10, 100, 1000);

	FILE* f;
	char buf[10000];
	sprintf(buf, "<svg height = \"500\" width = \"500\">\n <polygon points = \"%d,%d,%d,%d,%d,%d\" style = \"fill:transparent; stroke:red; stroke-width:2\"/> \n <g font-size:10; fill:red; font-family=\"sans-serif\"> <text x = \"%d\" y = \"%d\"> A </text> <text x = \"%d\" y = \"%d\"> B </text> <text x = \"%d\" y = \"%d\"> C </text>  </g> <g> <circle cx=\"%d\" cy=\"%d\" r=\"3\" /> <circle cx=\"%d\" cy=\"%d\" r=\"3\" /> <circle cx=\"%d\" cy=\"%d\" r=\"3\" /> </g> <path d=\"M %d %d q 45 130 90 0\" style =\"fill:transparent; stroke:blue; stroke - width:3;\" < / svg>", point1.GetX(), point1.y, point2.x, point2.y, point3.x, point3.y, pointA.x, pointA.y, pointB.x, pointB.y, pointC.x, pointC.y, point1.GetX(), point1.y, point2.x, point2.y, point3.x, point3.y, point1.GetX(), point1.y);
	int len = strlen(buf);
	if ((f = fopen("polyline.htm", "w")) == 0) {
		return 0;
	}
	fwrite(buf, 1, len, f);
	fclose(f);
}

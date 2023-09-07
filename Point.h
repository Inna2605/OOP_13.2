#pragma once
class Point
{
	int x;
	int y;
public:
	Point();
	Point(int a, int b);

	int getPointX();
	int getPointY();
};
std::ostream& operator<<(std::ostream& os, Point& point);



#include<iostream>
#include "Point.h"

Point::Point()
{
	std::cout << "������� ���������� ����� �� ��� �:";
	std::cin >> x;
	std::cout << "������� ���������� ����� �� ��� Y:";
	std::cin >> y;
}

Point::Point(int a, int b)
{
	x = a;
	y = b;
}

int Point::getPointX()
{
	return x;
}

int Point::getPointY()
{
	return y;
}

std::ostream& operator<<(std::ostream& os, Point& point)
{
	os << "���������� �: " << point.getPointX() << "\n���������� �: " << point.getPointY() << std::endl;
	return os;
}

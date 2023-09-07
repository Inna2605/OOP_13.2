#include<iostream>
#include "Point.h"

Point::Point()
{
	std::cout << "Введите координату точки по оси Х:";
	std::cin >> x;
	std::cout << "Введите координату точки по оси Y:";
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
	os << "Координата Х: " << point.getPointX() << "\nКоордината У: " << point.getPointY() << std::endl;
	return os;
}

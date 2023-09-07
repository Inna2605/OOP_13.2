//Создайте список (list) для хранения элементов типа Point. Сохраните в этом списке 5 элементов типа Point.
//Выведите элементы сохраненного списка на экран.

#include <iostream>
#include<list>
#include"Point.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    Point A(5, 10);
    Point B(13, 6);
    Point C(8, 8);
    Point D(0, 0);
    Point E(1, 0);

    list<Point> arreyPoint = { A, B, C, D, E };
    list<Point>::iterator iter = arreyPoint.begin();

    for (int i = 0; i < 5; i++) {
        cout << *iter << endl;
        iter++;
    }
}

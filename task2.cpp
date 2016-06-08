/*************************************************************************
	> File Name: task2.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 19 Mar 2016 11:46:04 AM EDT
 ************************************************************************/

#include<iostream>
using namespace std;

class Point
{
    public:
    double x, y;
        
    Point& operator++ ()
    {
        ++x;
        ++y;
        return *this;
    }

    Point operator++ (int)
    {
        Point temp_pt = *this;
        ++x;
        ++y;
        return temp_pt;
    }
    
};

int main()
{
    Point p1, p2;
    p1.x = 1;
    p1.y = 3;
    p2 = ++p1;
    cout << p1.x << ' ' << p1.y << endl;
    cout << p2.x << ' ' << p2.y << endl;
    p2 = p1++;

    cout << p1.x << ' ' << p1.y << endl;
    cout << p2.x << ' ' << p2.y << endl;

}

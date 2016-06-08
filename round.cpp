/*************************************************************************
	> File Name: round.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 12 Apr 2016 12:09:39 PM EDT
 ************************************************************************/

#include<iostream>
using namespace std;

const float pi = 3.1415;

class Round 
{
public:
    //Round(r = 0) {} error;
    Round(){}
    Round(Round &rhs) { r = rhs.r; }

    void set_r(float n) {r = n;}
    double get_perimeter();
    double get_area();

private:
    float r;
};

double Round::get_perimeter()
{
    return 2 * pi *r;
}

double Round::get_area()
{
    return pi * r * r;
}
int main()
{
    Round r1;
    float r = 0.0;
    cout << "enter r:" << endl;
    cin >> r;

    r1.set_r(r);
    cout << "perimeter  = " << r1.get_perimeter() << " area = " << r1.get_area() << endl;
    return 0;
}

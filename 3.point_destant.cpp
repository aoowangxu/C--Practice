/*************************************************************************
	> File Name: 3.point_destant.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 12 Apr 2016 12:29:06 PM EDT
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;

class Point
{
public:
    Point(int rx = 0.0, int ry = 0.0) :x(rx),y(ry){}
    Point(Point &rhs){x = rhs.x, y = rhs.y;}
    Point & operator=(Point &rhs);
    ~Point(){}
    void set(float rx,float ry);
    float get_x() const {return x;}
    float get_y() const {return y;}
    friend ostream& operator<<(ostream &os, const Point &p);
    friend istream& operator>>(ostream &is, Point &p);
private:
    float  x;
    float  y;
};

void Point::set(float rx, float ry)
{
    x = rx;
    y = ry;
}

Point& Point::operator=(Point &rhs) 
    {
        if(this != &rhs)
        {
            x = rhs.x;
            y = rhs.y;
        }
        return *this;
    }

ostream&  operator<<(ostream &os, const Point &p) //加不加friend;
{
    os << "(" << p.x << ',' << p.y <<')' << endl;
    return os;
}

istream& operator>>(istream &is, Point &p)
{
    float x = 0;
    float y = 0;
    is >> x >> y;
    p.set(x, y);
    return is;
}

class Destance
{
public:
    Destance(){}
    Destance(Point rp1, Point rp2) {p1 = rp1; p2 = rp2;}
    Destance(Destance &rhs) {p1 = rhs.p1; p2 = rhs.p2; des = rhs.des;}
    Destance & operator=(Destance &rhs);
    ~Destance(){}    
    int calculate();
    friend ostream& operator<<(ostream &os, const Destance &rhs);
    friend istream& operator>>(istream &is, Destance &rhs);
//private:
    Point p1;
    Point p2;
    double des;
};

int Destance::calculate()
{
    double x0 = p1.get_x() - p2.get_x();
    double y0 = p1.get_y() - p2.get_y();
    des = sqrt(x0 * x0 + y0 * y0);
    return 0;
}

ostream& operator<<(ostream &os, const Destance &rhs) //freend function 参数是const 访问属性用点运算符；
{
    os << rhs.p1 << rhs.p2 << rhs.des << endl;
    return os;
}

istream& operator>>(istream &is, Destance &rhs)
{
    Point rp1;
    Point rp2;
    double rdes = 0;
    is >> rp1 >> rp2 >> rdes;
    rhs.p1 = rp1;
    rhs.p2 = rp2;
    rhs.des = rdes;
    return is;
}

Destance& Destance::operator=(Destance &rhs)
    {
        if(this != &rhs)
        {
            p1 = rhs.p1;
            p2 = rhs.p2;
        }
        return *this;
    }

int main()
{
    Point p1;
    Point p2;
    cout << "p1 and p2"<<endl;
    cin >> p1 >>p2;
    Destance d1(p1, p2);
    d1.calculate();
    cout << "two point and destance is " << endl;
    cout << d1 << endl;
    Destance dcopy;
    cout << "enter Destance: "<<endl;
    cin >> dcopy;
    cout << dcopy<< endl;
    return 0;
}

/*************************************************************************
	> File Name: plual.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 10 Apr 2016 04:31:08 AM EDT
 ************************************************************************/

#include<iostream>
using namespace std;

class Plural
{
public:
    Plural(){}
    Plural(float a, float b){real = a; im = b;}
    Plural operator +(const Plural &a);
    Plural operator -(const Plural &a);
    Plural & operator =(const Plural &a);
    void print();
private:
    float real;
    float im;
};

Plural& Plural:: operator =(const Plural &a)
{
    if(this == &a)
    {
        return *this;
    }
    else
    {
        this->real = a.real;
        this->im = a.im;
    }
    return *this;
}

Plural Plural:: operator+(const Plural &a)
{
    Plural p;
    p.real = this->real + a.real;
    p.im = this->im + a.im;
    return p;
}

Plural Plural:: operator-(const Plural &a)//先是返回值的类型 再是作用域  再是operator &(const A &a);
{

    Plural p;
    p.real = this->real - a.real;
    p.im = this->im - a.im;
    return p;
}

void Plural:: print()
{
    if(0 == real && 0 == im)
    {
        cout << "0" << endl;
        return ;
    }
    if(0 == real)
    {
        cout << im << "i"<<endl;
        return ;
    }
    if(0 == im)
    {
        cout << real <<endl;
        return;
    }
    cout<< real << " + " << im<<"i" <<endl;
    return;
}


int main()
{
    float a, b;
    cout << "enter a, b"<<endl;
    cin >> a >> b;
    Plural p1(a,b);
    cout << "enter a, b"<<endl;
    cin >> a >> b;
    Plural p2(a,b);
    Plural p;
    p = p1+p2;
    cout << "add is "<< endl;
    p.print();

    p = p1-p2;
    cout << "sub is "<< endl;
    p.print();

    return 0;
}
